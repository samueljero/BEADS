"""
Process monitor statistics object.

@author Xiangyu Bu <bu1@purdue.edu>
"""


class ProcMonStat:

    STAT_BEGIN_TOKEN = '# STAT_BEGIN'
    STAT_END_TOKEN = '# STAT END'

    # Description for each stat field.
    FIELD_DESC = {
        'cpu_sec': 'Total amount of CPU time (sec)',
        'total_sec': 'Total observation time (sec)',
        'avg_cpu_percent': 'Average CPU usage (percent)',
        'peak_cpu_percent': 'Peak CPU usage (percent)',
        'avg_rss_size_kib': 'Average RAM usage (KiB)',
        'peak_rss_size_kib': 'Peak RAM usage (KiB)'
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

    def __init__(self, multipliers=DEFAULT_MULTIPLIERS):
        """
        Initialize object with baseline data and multiplier.
        """
        self.base_stat = None
        self.base_count = 0
        self.multipliers = multipliers

    def add_baseline(self, stat_dict):
        if not isinstance(stat_dict, dict):
            raise ValueError('Stat baseline must be a stat dict.')
        if self.base_count == 0:
            self.base_stat = stat_dict
            self.base_count = 1
        else:
            for k in self.FIELD_DESC:
                self.base_stat[k] = (self.base_stat[k] * self.base_count + stat_dict[k]) / (self.base_count + 1)
                self.base_count += 1

    def test_stat(self, stat_dict=None, stdout=None):
        """
        Test newly generated statistical data against baseline and multiplier.
        """
        if stdout is not None:
            stat_dict = self.extract_stat(stdout)
        errors = []

        for k in self.multipliers:
            mx = stat_dict[k] / self.base_stat[k]
            if mx > self.multipliers[k]:
                errors.append('%s exceeds limit by %f.' % (self.FIELD_DESC[k], mx - self.multipliers[k]))

        return len(errors) == 0, errors

    @classmethod
    def extract_stat(cls, stdout):
        """
        Extract the statistical data from procmon stdout and return a
        Python dict type.
        """
        if isinstance(stdout, str):
            # Read from string.
            first_split = stdout.split(cls.STAT_BEGIN_TOKEN, 1)
            if len(first_split) != 2:
                raise ValueError('Stat begin token not found.')
            stdout = first_split[1]
            code = stdout.split(cls.STAT_END_TOKEN, 1)[0]
        else:
            # Read from large file-like object.
            for line in stdout:
                if line.startswith(cls.STAT_BEGIN_TOKEN):
                    break
            code = ''
            for line in stdout:
                if line.startswith(cls.STAT_END_TOKEN):
                    break
                code += line
        if len(code) == 0:
            raise ValueError('No statistical data found.')
        return eval(code)
