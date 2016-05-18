"Testing Topology"
# Samuel Jero <sjero@purdue.edu>

from mininet.topo import Topo
from mininet.net import Mininet

# The build() method is expected to do this:

class FixedTree( Topo ):
    "Topology for a tree network with a given depth and fanout."

    def build( self, depth=1, fanout=2, failMode='secure'):
        # Numbering:  h1..N, s1..M
        self.hostNum = 1
        self.switchNum = 1
        # Build topology
        self.addTree( depth, fanout, failMode)

    def makeMAC(self, i):
	return "00:00:00:00:00:" + hex(i)[2:]

    def makeDPID( self, i):
	dp = hex(i)[2:]
	return "0" * (12 - len(dp)) + dp

    def addTree( self, depth, fanout, fm):
        """Add a subtree starting with node n.
           returns: last node added"""
        isSwitch = depth > 0
        if isSwitch:
            node = self.addSwitch( 's%s' % self.switchNum, dpid = self.makeDPID(self.switchNum) ,failMode=fm)
            self.switchNum += 1
            for _ in range( fanout ):
                child = self.addTree( depth - 1, fanout, failMode)
                self.addLink( node, child )
        else:
            node = self.addHost( 'h%s' % self.hostNum, mac = self.makeMAC(self.hostNum))
            self.hostNum += 1
        return node
