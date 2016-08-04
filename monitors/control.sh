#!/bin/bash
# start_controller.sh CONTROLLER_ID [start|mon|stop]
# A monolithic script to start a supported controller.
# 
# @author Xiangyu Bu <bu1@purdue.edu>

# Time, in ms, to wait before sampling resource usage.
RESMON_POLL_MS=250

# Time, in seconds, to wait before killing the controller.
STOP_TIMEOUT_SEC=5

# Temporary log path. It will be cat-ed to stdout at the end.
LOG_PATH="/tmp/res_controller.log"

# Convert controller ID to lowercase.
CONTROLLER_ID=${1,,}

# Convert action to lowercase.
ACTION=${2,,}

case $CONTROLLER_ID in
    onos)
        START_CMD="start"
        PID_CMD="pgrep java"
        STOP_CMD="stop"
        KILL_CMD="pkill java"
        STOP_TIMEOUT_SEC=5
        ;;
	pox)
        START_CMD="/root/run_pox.sh"
        PID_CMD="pgrep python"
        STOP_CMD="pkill -SIGINT python"
        KILL_CMD="pkill python"
        STOP_TIMEOUT_SEC=5
        ;;
    ryu)
        START_CMD="/root/run_ryu.sh"
        PID_CMD="pgrep ryu-manager"
        STOP_CMD="pkill -SIGINT ryu-manager"
        KILL_CMD="pkill ryu-manager"
        STOP_TIMEOUT_SEC=5
        ;;
	floodlight)
		START_CMD="/root/floodlight/floodlight.sh"
        PID_CMD="pgrep java"
        STOP_CMD="pkill java"
        KILL_CMD="pkill java"
        STOP_TIMEOUT_SEC=5
		;;
    *)
        echo "Controller \"$CONTROLLER_ID\" not yet supported."
        exit 1
        ;;
esac

case $ACTION in
    start)
        # Run kill before starting in case there is residual controller process.
        eval $KILL_CMD
        eval $START_CMD
        ;;
    mon)
        # ps aux
        pid=$($PID_CMD)
        echo "[ctlrmon] Controller pid: $pid."
        nohup ~/monitors/procmon $pid $RESMON_POLL_MS > $LOG_PATH &
        ;;
    stop)
        eval $STOP_CMD
        # Sleep and then kill the controller if it is still alive.
        sleep $STOP_TIMEOUT_SEC
        eval $KILL_CMD
        if [ "$?" -eq "0" ] ; then
            echo "Controller process was killed."
            # Kill the process monitor as well.
            pkill -signal SIGINT procmon
            # Wait for 1 second so that procmon can exit.
            sleep 1
        fi
        # Print the log back to stdout.
        echo "[ctlrmon] Resource log is as follows."
        cat $LOG_PATH
        ;;
esac
