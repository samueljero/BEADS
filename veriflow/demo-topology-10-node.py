from mininet.topo import Topo, Node

class CustomTopo( Topo ):
        "Simple topology"
        
        def __init__(self, enable_all = True):
                "Create custom topo"
                
                super( CustomTopo, self).__init__()
                
                #Switches
                torswitch1 = 1                
                torswitch2 = 2                
                torswitch3 = 3                
                torswitch4 = 4                
                torswitch5 = 5                
                torswitch6 = 6
                torswitch7 = 7
                torswitch8 = 8
                torswitch9 = 9
                torswitch10 = 10
                
                #Nodes
                rack1node1 = 32
                rack1node2 = 33
                rack5node1 = 64
                rack7node1 = 65
                rack8node1 = 66
                rack9node1 = 128
                rack10node1 = 129
                               
                #Add Switches
                self.add_node(torswitch1, Node( is_switch=True ) )
                self.add_node(torswitch2, Node( is_switch=True ) )
                self.add_node(torswitch3, Node( is_switch=True ) )
                self.add_node(torswitch4, Node( is_switch=True ) )
                self.add_node(torswitch5, Node( is_switch=True ) )
                self.add_node(torswitch6, Node( is_switch=True ) )
                self.add_node(torswitch7, Node( is_switch=True ) )
                self.add_node(torswitch8, Node( is_switch=True ) )
                self.add_node(torswitch9, Node( is_switch=True ) )
                self.add_node(torswitch10, Node( is_switch=True ) )

                #Add Nodes
                self.add_node(rack1node1, Node( is_switch=False ) )
                self.add_node(rack1node2, Node( is_switch=False ) )
                self.add_node(rack5node1, Node( is_switch=False ) )
                self.add_node(rack7node1, Node( is_switch=False ) )
                self.add_node(rack8node1, Node( is_switch=False ) )
                self.add_node(rack9node1, Node( is_switch=False ) )
                self.add_node(rack10node1, Node( is_switch=False ) )

                #Add Links
                #Rack 1
                self.add_edge( rack1node1, torswitch1 )
                self.add_edge( rack1node2, torswitch1 )

                #Rack 5
                self.add_edge( rack5node1, torswitch5 )

                #Rack 7
                self.add_edge( rack7node1, torswitch7 )

                #Rack 8
                self.add_edge( rack8node1, torswitch8 )

                #Rack 9
                self.add_edge( rack9node1, torswitch9 )

                #Rack 10
                self.add_edge( rack10node1, torswitch10 )

                self.add_edge( torswitch1, torswitch2 )
                self.add_edge( torswitch1, torswitch3 )
                self.add_edge( torswitch2, torswitch4 )
                self.add_edge( torswitch2, torswitch5 )
                self.add_edge( torswitch3, torswitch4 )
                self.add_edge( torswitch4, torswitch5 )
                self.add_edge( torswitch4, torswitch6 )
                self.add_edge( torswitch5, torswitch9 )
                self.add_edge( torswitch6, torswitch7 )
                self.add_edge( torswitch6, torswitch8 )
                self.add_edge( torswitch6, torswitch10 )
                self.add_edge( torswitch9, torswitch10 )
                
                self.enable_all()
                
topos = { 'customtopo': ( lambda: CustomTopo() ) }
