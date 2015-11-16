/**
 * procmon.cpp
 * Periodically monitor CPU usage of a given process. To exit, either terminate the monitored
 * process or issue a SIGINT to procmon.
 * 
 * @author Xiangyu Bu <bu1@purdue.edu>
 */

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <ctime>
#include <signal.h>
#include <unistd.h>

#define EXPECTED_ARGC           3
#define ERR_INVALID_ARGC        1
#define ERR_SIGACTION           2
#define RETURN_OK               0
#define RETURN_ERR              (-1)

long ticks_per_sec;
bool continue_loop = true;
char stat_path[PATH_MAX];
int page_size_kb;

double base_cpu_seconds = 0;

unsigned long long counter = 0;
double uptime;
double total_seconds = 0;
double cpu_seconds = 0;
double avg_cpu_percentage = 0;
double peak_cpu_percentage = 0;
double avg_rss = 0;
unsigned long peak_rss = 0;

void on_interrupted(int sig, siginfo_t *siginfo, void *context) {
    continue_loop = false;
}

double get_uptime() {
    int fields_read;
    double sec;
    FILE *f = fopen("/proc/uptime", "r");
    fields_read = fscanf(f, "%lfs", &sec);
    fclose(f);
    return sec;
}

/**
 * Poll process information and print to stdout.
 * See https://linux.die.net/man/5/proc
 * See https://www.kernel.org/doc/Documentation/filesystems/proc.txt
 * @return RETURN_OK if okay; RETURN_ERR otherwise.
 */
int pollstat() {
    time_t ts;
    FILE *f;
    int fields_read;
    unsigned long long cpu_ticks;
    double cpu_percentage;

    int pid;
    char comm[PATH_MAX];
    char state;
    int ppid, pgid, sid;
    int tty_nr;             // tty the process uses
    int tty_pgid;           // the controlling terminal of the process
    unsigned int flags;     // task flags
    unsigned long min_flt, maj_flt;   // number of minor/major faults
    unsigned long cmin_flt, cmaj_flt; // number of minor/major faults for children
    unsigned long utime;    // user mode jiffies
    unsigned long stimev;   // kernel mode jiffies
    long cutime;             // user mode jiffies with child's
    long cstime;             // kernel mode jiffies with child's
    long priority;
    long nicev;
    long num_threads;
    long it_real_value;
    unsigned long long start_time;
    unsigned long vsize;
    long rss;
    unsigned long rsslim;
    unsigned long start_code;
    unsigned long end_code;
    unsigned long start_stack;
    unsigned long esp, eip;
    unsigned long sig_pending;
    unsigned long sig_blocked;
    unsigned long sig_ignore;
    unsigned long sig_catch;
    unsigned long wchan;
    unsigned long nswap;
    unsigned long cnswap;           // Not maintained.
    int exit_signal;
    int cpu;                        // Signal to be sent to parent when we die.
    unsigned int rt_priority;       // CPU number last executed on.
    int policy;
    unsigned long long delayacct_blkio_ticks;// Aggregated block I/O delays, measured in clock ticks (centiseconds).
    unsigned long guest_time;       // Guest time of the process (time spent running a virtual CPU for a guest operating system), measured in clock ticks (divide by sysconf(_SC_CLK_TCK)).
    long cguest_time;               // Guest time of the process's children, measured in clock ticks (divide by sysconf(_SC_CLK_TCK)).
    
    if (!(f = fopen(stat_path, "r"))) {
        return RETURN_ERR;
    }

    fields_read = fscanf(f, 
        "%d %s %c %d %d %d "
        "%d %d "
        "%u %lu %lu %lu %lu "
        "%lu %lu %ld %ld "
        "%ld %ld %ld "
        "%ld %llu "
        "%lu %ld %lu "
        "%lu %lu "
        "%lu %lu "
        "%lu %lu "
        "%lu %lu %lu "
        "%lu %lu %lu %d"
        "%d %u %d"
        "%llu %lu %ld",
        &pid, comm, &state, &ppid, &pgid, &sid,
        &tty_nr, &tty_pgid,
        &flags, &min_flt, &cmin_flt, &maj_flt, &cmaj_flt,
        &utime, &stimev, &cutime, &cstime,
        &priority, &nicev, &num_threads,
        &it_real_value, &start_time,
        &vsize, &rss, &rsslim,
        &start_code, &end_code,
        &start_stack, &esp,
        &eip, &sig_pending,
        &sig_blocked, &sig_ignore, &sig_catch,
        &wchan, &nswap, &cnswap, &exit_signal,
        &cpu, &rt_priority, &policy,
        &delayacct_blkio_ticks, &guest_time, &cguest_time);    
    
    fclose(f);

    time(&ts);
    cpu_ticks = utime + stimev + cutime + cstime;
    cpu_seconds = cpu_ticks / ticks_per_sec;
    uptime = get_uptime();
    total_seconds = uptime - start_time  / ticks_per_sec;
    cpu_percentage = 100 * cpu_seconds / total_seconds;

    // Update resident set size.
    rss *= page_size_kb;
    avg_rss += rss;
    if (rss > peak_rss) peak_rss = rss;

    // Update CPU usage.
    avg_cpu_percentage += cpu_percentage;
    if (cpu_percentage > peak_cpu_percentage) peak_cpu_percentage = cpu_percentage;

    fprintf(stdout, "%llu, %ld, %d, %lf, %lf, %lf, %lu\n",
        counter, ts, pid, cpu_seconds, total_seconds, cpu_percentage, rss);

    ++counter;
}

/**
 * Print usage information.
 */
void print_usage(const char *prog_name) {
    fprintf(stdout,
        "Usage: %s PID INTERVAL\n"
        " PID: ID of the process to monitor.\n"
        " INTERVAL: Amount of time, in ms, to poll process info.\n",
        prog_name);
}

int main(int argc, char *argv[]) {
    pid_t target_pid;
    useconds_t poll_interval;
    struct sigaction act;
 
    ticks_per_sec = sysconf(_SC_CLK_TCK);
    page_size_kb = sysconf(_SC_PAGESIZE) >> 10;    // To KiB.

    if (argc != EXPECTED_ARGC) {
        fprintf(stdout,
            "Error: wrong number of arguments. Got %d. Expect %d.\n", argc, EXPECTED_ARGC);
        for (int i = 0; i < argc; ++i) {
            fprintf(stdout, " argv[%d] = \"%s\".\n", i, argv[i]);
        }
        print_usage(argv[0]);
        return ERR_INVALID_ARGC;
    }

    target_pid = atoi(argv[1]);
    poll_interval = atoi(argv[2]) * 1000;

    snprintf(stat_path, PATH_MAX, "/proc/%d/stat", target_pid);

    memset(&act, 0, sizeof(struct sigaction));
    act.sa_sigaction = &on_interrupted;
    act.sa_flags = SA_SIGINFO;
    if (sigaction(SIGINT, &act, NULL) < 0) {
        perror("sigaction");
        return ERR_SIGACTION;
    }

    fprintf(stdout, "count, time, pid, cpu_seconds, total_seconds, cpu_percentage, rss_kib\n");
    
    if (pollstat() >= 0) {
        base_cpu_seconds = cpu_seconds;
        // Instead of putting baseline update in pollstat(), we
        // put it outside to reduce unnecessary branches.
        while (continue_loop) {
            if (pollstat() < 0)
                break;
            usleep(poll_interval);
        }
    }

    if (counter == 0) {
        fprintf(stdout, "Error: no sample.\n");
    } else {
        avg_cpu_percentage /= counter;
        avg_rss /= counter;
        double diff_cpu_seconds = cpu_seconds - base_cpu_seconds;
        fprintf(stdout,
            "# STAT_BEGIN\n"
            "{\"num_samples\": %llu,\n"
            "\"cpu_sec_begin\": %lf,\n"
            "\"cpu_sec_end\": %lf,\n"
            "\"cpu_sec\": %lf,\n"
            "\"total_sec\": %lf,\n"
            "\"avg_cpu_percent\": %lf,\n"
            "\"peak_cpu_percent\": %lf,\n"
            "\"avg_rss_size_kib\": %.0lf,\n"
            "\"peak_rss_size_kib\": %lu}\n"
            "# STAT END\n",
            counter, base_cpu_seconds, cpu_seconds, diff_cpu_seconds, total_seconds, avg_cpu_percentage, peak_cpu_percentage, avg_rss, peak_rss);
    }

    fflush(stdout);
    return RETURN_OK;
}
