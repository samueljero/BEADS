#!/usr/bin/env perl

use warnings;
use strict;
use POSIX;

chomp(my $clone=`ifconfig eth0 | grep HWaddr  | sed 's/^.*00:01://' | awk '{split(\$0,array,":")} END {print array[1]*100+array[2]}'`);

my $mac = sprintf("00:00:00:02:%02d:%02d", $clone / 100, $clone % 100);

open(FILE, ">/etc/hostname");
print FILE "vm$clone\n";
close FILE;

open(FILE, ">/etc/hosts");
print FILE "127.0.0.1	localhost\n";
print FILE "127.0.1.1	vm$clone\n";
print FILE "10.0.0.1	main\n\n";
close FILE;

system("hostname vm$clone");

open(FILE, ">/etc/network/interfaces");
print FILE <<END;
auto lo
iface lo inet loopback

auto eth0
iface eth0 inet dhcp

auto eth1
iface eth1 inet dhcp
END
close(FILE);
