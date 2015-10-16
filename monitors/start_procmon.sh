#!/bin/bash
#
# Start a process and run procmon for it.
# @author Xiangyu Bu <bu1@purdue.edu>
# 
# Usage:
# start_procmon.sh POLL_DELAY LOG_FILE CTLR_CMD [CTLR_ARGS]
#  POLL_DELAY: wait time (ms) between two consecutive samplings.
#  LOG_FILE:   where to write resmon output.
#  CTLR_CMD:   command to start the controller.
#  CTLR_ARGS:  arguments to pass to controller.
#

RESMON_POLL_MS=$1
RESMON_LOG_FILE=$2

# TODO: for these two lines, we may use stdout as the pid
# to get better flexibility. I'll keep it for now.
eval "${@:3} &"
pid=$!

~/monitors/procmon $pid $RESMON_POLL_MS >> ~/$RESMON_LOG_FILE

