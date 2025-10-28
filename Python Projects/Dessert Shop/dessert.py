#Creates a parent classes for all other desserts
from abc import ABC, abstractmethod
class DessertItem(ABC):
    def __init__(self,name="",tax_percent=7.25):
        self.name = name
        self.tax_percent = tax_percent
    @abstractmethod
    def calculateCost(self):
        pass
    def calculateTax(self):
        return self.calculateCost() * (self.tax_percent / 100)
#Creates a candy class
class Candy(DessertItem):
    def __init__(self, name="", tax_percent=7.25, price_per_pound=0.0,amount=0.0):
        super().__init__(name,tax_percent)
        self.price_per_pound = price_per_pound
        self.amount = amount
    def calculateCost(self):
        return self.amount * self.price_per_pound

#Creates an ice cream class
class IceCream(DessertItem):
    def __init__(self, name="", tax_percent=7.25,price_per_scoop=0.0,scoops=0):
        super().__init__(name,tax_percent)
        self.price_per_scoop = price_per_scoop
        self.scoops = scoops
    def calculateCost(self):
        return self.scoops * self.price_per_scoop

#Creates a cookie class
class Cookies(DessertItem):
    def __init__(self, name="", tax_percent=7.25, price_per_dozen=0.0, amount=0):
        super().__init__(name,tax_percent)
        self.price_per_dozen = price_per_dozen
        self.amount = amount
    def calculateCost(self):
        dozens = self.amount/12
        return dozens * self.price_per_dozen

#Creates a sundae class, ice cream child class
class Sundae(IceCream):
    def __init__(self, name="", tax_percent=7.25, price_per_scoop=0.0, scoops=0, topping="",topping_price=0.0):
        super().__init__(name, tax_percent, price_per_scoop, scoops)
        self.topping = topping
        self.topping_price = topping_price
    def calculateCost(self):
        scoop_price = self.price_per_scoop * self.scoops
        price = scoop_price + self.topping_price
        return price


#Creates an order class to hold different desserts
class Order():
    def __init__(self):
        self.order=[]
    def add(self,item):
        self.order.append(item)
    def __len__(self):
        return len(self.order)
    def orderCost(self):
        subtotal = 0.0
        for i in self.order:
            subtotal += i.calculateCost()
        return subtotal
    def orderTax(self):
        taxtotal = 0.0
        for i in self.order:
            taxtotal += i.calculateTax()
        return taxtotal