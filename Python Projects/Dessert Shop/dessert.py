class DessertItem():
    def __init__(self,name=""):
        self.name = name

class Candy(DessertItem):
    def __init__(self, name="", pfp=0.0,amount=0.0):
        super().__init__(name)
        self.pfp = pfp
        self.amount = amount

class IceCream(DessertItem):
    def __init__(self, name="",pps=0.0,scoops=0):
        super().__init__(name)
        self.pps = pps
        self.scoops = scoops

class Cookies(DessertItem):
    def __init__(self, name="", ppd=0.0, amount=0):
        super().__init__(name)
        self.ppd = ppd
        self.amount = amount

class Sundae(IceCream):
    def __init__(self, name="", pps=0.0, scoops=0, topping="",topping_price=0.0):
        super().__init__(name, pps, scoops)
        self.topping = topping
        self.topping_price = topping_price

class Order():
    def __init__(self):
        self.order=[]
    def add(self,item):
        self.order.append(item)
    def __len__(self):
        return len(self.order)