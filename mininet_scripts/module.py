#Samuel Jero <sjero@purdue.edu>

class Module: #Abstract Base class for protocol modules
    def __init__(self,myeth,myip):
        self.name = "base"
        self.ip = myip
        self.eth = myeth
    def cmd(self, cmd):
        pass
    def start(self):
        pass
    def stop(self):
        pass
