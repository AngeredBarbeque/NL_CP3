#Creates a parent classes for all other desserts
class DessertItem():
    def __init__(self,name=""):
        self.name = name

#Creates a candy class
class Candy(DessertItem):
    def __init__(self, name="", pfp=0.0,amount=0.0):
        super().__init__(name)
        self.pfp = pfp
        self.amount = amount

#Creates an ice cream class
class IceCream(DessertItem):
    def __init__(self, name="",pps=0.0,scoops=0):
        super().__init__(name)
        self.pps = pps
        self.scoops = scoops

#Creates a cookie class
class Cookies(DessertItem):
    def __init__(self, name="", ppd=0.0, amount=0):
        super().__init__(name)
        self.ppd = ppd
        self.amount = amount

#Creates a sundae class, ice cream child class
class Sundae(IceCream):
    def __init__(self, name="", pps=0.0, scoops=0, topping="",topping_price=0.0):
        super().__init__(name, pps, scoops)
        self.topping = topping
        self.topping_price = topping_price

#Creates an order class to hold different desserts
class Order():
    def __init__(self):
        self.order=[]
    def add(self,item):
        self.order.append(item)
    def __len__(self):
        return len(self.order)