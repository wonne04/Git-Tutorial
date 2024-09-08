import math
class circle():
    def __init__(self,x1,y1,radius):
        self.radius=radius
        self.x1=x1
        self.y1=y1
    def calcWidth(self):
        return math.pi*self.radius**2