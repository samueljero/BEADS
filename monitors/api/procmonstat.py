"""
Process monitor statistics object.

@author Xiangyu Bu <bu1@purdue.edu>
"""


class ProcMonStat:

    STAT_BEGIN_TOKEN = '# STAT_BEGIN\n'

    # Description for each stat field.
    FIELD_DESC = {
        'cpu_sec': 'Total amount of CPU time (in seconds)',
        'total_sec': 'Total observation time (in seconds)',
        'avg_cpu_percent': 'Average CPU usage (percent)',
        'peak_cpu_percent': 'Peak CPU usage (percent)',
        'avg_rss_size_kib': 'Average RAM usage (in KiB)',
        'peak_rss_size_kib': 'Peak RAM usage (in KiB)'
    }

    # Raise alarm if [new value] / [base value] > [multiplier].
    DEFAULT_MULTIPLIERS = {
        'cpu_sec': 1.5,
        # Omit fields that we don't care.
        # 'total_sec': 2,
        # 'avg_cpu_percent': 1,
        # 'peak_cpu_percent': 1,
        'avg_rss_size_kib': 2,
        'peak_rss_size_kib': 3
    }

    def __init__(self, baseline_stdout, multipliers=DEFAULT_MULTIPLIERS):
        """
        Initialize object with baseline data and multiplier.
        """
        self.base_stat = self.extract_stat(baseline_stdout)
        self.multipliers = multipliers

    def test_stat(stdout):
        """
        Test newly generated statistical data against baseline and multiplier.
        """
        new_stat = self.extract_stat(stdout)
        errors = []

        for k in self.multipliers:
            mx = new_stat[k] / self.base_stat[k]
            if mx > self.multipliers[k]:
                errors.append((k, self.FIELD_DESC[k], mx, self.multipliers[k]))

        return len(errors) == 0, errors

    @classmethod
    def extract_stat(cls, stdout):
        """
        Extract the statistical data from procmon stdout and return a
        Python dict type.
        """
        for line in stdout:
            if line == cls.STAT_BEGIN_TOKEN:
                break
        code = ''
        for line in stdout:
            code += line
        if len(code) == 0:
            raise ValueError('No statistical data found.')
        return eval(code)
