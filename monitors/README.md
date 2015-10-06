monitors
========

A series of utility tools to generate metrics.

## procmon

A tool to monitor the CPU and virtual memory usage of a process periodically, and generate simple
statistics at the end.

Example:

```bash
./procmon 24749 500
[1444098306] pid=24749, utime=93, stime=109, total_time=202, total_seconds=1252.110000, cpu=0.159730%, vsize=20594688B
[1444098307] pid=24749, utime=93, stime=109, total_time=202, total_seconds=1252.610000, cpu=0.159667%, vsize=20594688B
[1444098307] pid=24749, utime=93, stime=109, total_time=202, total_seconds=1253.110000, cpu=0.159603%, vsize=20594688B
[1444098308] pid=24749, utime=93, stime=109, total_time=202, total_seconds=1253.610000, cpu=0.159539%, vsize=20594688B
[1444098308] pid=24749, utime=93, stime=109, total_time=202, total_seconds=1254.110000, cpu=0.159476%, vsize=20594688B
^CStatistics:
Total samples:  732
Total uptime:   1582278.110000 sec
Total CPU time: 1254.110000 sec
Avg CPU usage:  0.097444 %
Peak CPU usage: 0.161276 %
Avg VM size:    20594688 B
Peak VM size:   20594688 B
```
