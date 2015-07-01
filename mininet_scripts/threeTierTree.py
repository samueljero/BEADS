import sys, random, re, math
#
#Three-Level Data Center Tree topology implemention for mininet
#Samuel Jero <sjero@purdue.edu>
#based on
#Al-Fares, M. et al. 2008. A Scalable, Commodity Data Center Network Architecture. ACM SIGCOMM Computer Communication Review. 38, (2008), 63.
from mininet.topo import Topo


class ThreeTierTree(Topo):
	def randByte(self):
		return hex(random.randint(0, 255))[2:]
		
	def makeMAC(self, i):
		#return self.randByte() + ":" + self.randByte() + ":" + self.randByte() + ":00:00:" + hex (i)[2:]
		return "00:00:00:00:00:" + hex (i)[2:]

	def makeDPID(self, i):
		a = self.makeMAC(i)
		dp = "".join(re.findall(r'[a-f0-9]+', a))
		return "0" * (12 - len(dp)) + dp

	def __init__(self, hpr = 20, racks = 2, **opts):
		Topo.__init__(self, **opts)

		if (racks % 2 != 0):
			print "Warning number of racks must be even!"

		tor = []
		agg = []
		core = []
		numLeaf = hpr * racks

		s = 1
		#ToR switches
		for i in range(racks):
			sw = self.addSwitch('s' + str (s), dpid = self.makeDPID(s), **dict(listenPort = (13000 + s - 1)))
			s = s + 1
			tor.append(sw)

		#End Hosts
		for i in range(numLeaf):
			h = self.addHost('h' + str(i + 1), mac = self.makeMAC(i), ip = "10.0.0." + str (i + 1))
			sw = tor[i / hpr]
			self.addLink(h, sw)

		#Agg Layer
		n = int(math.ceil(math.sqrt(float(racks))))
		if n < 2:
			n = 2
		ntor=0
		for i in range(racks / n):
			asw = self.addSwitch('s' + str(s), dpid = self.makeDPID(s), **dict(listenPort = (13000 + s - 1)))
			s = s + 1
			agg.append(asw)
			for j in range(n):
				tsw = tor[ntor + j]
				self.addLink(tsw, asw)
			ntor = ntor + n

		#Core Layer
		for i in range(1):
			csw = self.addSwitch('s' + str(s), dpid = self.makeDPID(s), **dict(listenPort = (13000 + s - 1)))
			s = s + 1
			core.append(csw)
		# bw = bw * hpr
		for i in range(0, len(agg)):
			for j in range(0, len(core)):
				self.addLink(agg[i], core[j])

