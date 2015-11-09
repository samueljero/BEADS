"""
Process Monitor wrapper to monitor a switch process (or any arbitrary process).

When the process can be found by pgrep its name and the monitor starts, the
caller to start() will get a random monitor ID. Monitor log and PID are stored
in temporary files named with the monitor ID.

When stop() is called, a SIGNIT is sent to the monitor process and the log will
be dumped to the logger.

@author Xiangyu Bu <bu1@purdue.edu>
"""

import os
import subprocess
import uuid
import procmonstat


def get_monitor_paths(monitor_id):
    prefix = '/tmp/res_switch_'
    return prefix + monitor_id + '.log', prefix + monitor_id + '.pid'


def start(pname='ovs-vswitchd', lg=None, interval_ms=250):
    """
    Start a monitor for the target process.
    :param pname: Name of the process for pgrep.
    :param lg: The logger object.
    :param interval_ms: Time, in ms, between two polling of resource usage info.
    :rtype str: ID of the monitor.
    """
    monitor_id = str(uuid.uuid4())
    log_path, pid_path = get_monitor_paths(monitor_id)
    subp = subprocess.Popen(['pgrep', pname], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    o, e = subp.communicate()
    if subp.returncode != 0:
        lg.output('[procmon] Error: process "' + pname + '" was not found (code ' + str(subp.returncode) + ').\n')
        return None
    retval = os.system("""nohup ~/monitors/procmon %s %d > %s &
    echo $! > %s
    """ % (o.strip(), interval_ms, log_path, pid_path))
    return monitor_id if retval == 0 else None


def stop(monitor_id, lg):
    """
    Stop the monitor and dump the resource log to logger.
    :param monitor_id: ID of the monitor, returned by a previous start() call.
    :param lg: The logger object.
    :rtype None | dict[str, float]: A statistics dict.
    """
    if monitor_id is None:
        lg.output('[procmon] Monitor ID is not set.\n')
        return None
    log_path, pid_path = get_monitor_paths(monitor_id)
    try:
        with open(pid_path, 'r') as f:
            pid = int(f.read())
            # lg.output('[procmon] Monitor pid = %d.\n' % pid)
    except Exception as e:
        lg.output('[procmon] An exception occurred reading monitor PID: ' + str(e) + '.\n')
        return None
    # subp = subprocess.Popen(['ps', 'aex'], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    # o, e = subp.communicate()
    # lg.output(o)
    os.system("kill -s 2 {0} ; wait {0}".format(pid))
    lg.output('[procmon] Monitor exit.\n')
    # lg.output("[procmon] Resource log is as follows.\n")
    with open(log_path, 'r') as f:
        lg.output('[procmon] Extracting statistics data from log.\n')
        return procmonstat.ProcMonStat.extract_stat(f)
        # for ln in f:
        #     lg.output(ln)
    # lg.output("[procmon] Resource log ends.\n")
