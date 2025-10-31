#Creates a parent classes for all other desserts
from abc import ABC, abstractmethod


class DessertShop():
    def check_float(self, num):
        try:
            num = float(num)
            if num < 0:
                print("Please enter a positive number.")
                return False
        except:
                print("Please enter a valid number.")
                return False
        return True
    def user_prompt_candy(self):
        while True:
            name = input("What is the name of your candy?\n")
            tax = input("What is the tax percent?\n")
            if not self.check_float(tax):
                continue
            price_per_pound = input("What is the price per pound of your candy?\n")
            if not self.check_float(price_per_pound):
                continue
            amount = input("How many pounds would you like?\n")
            if not self.check_float(amount):
                continue

            return Candy(name, float(tax), float(price_per_pound), float(amount))

    def user_prompt_cookie(self):
        while True:
            name = input("What is the name of your cookie?\n")
            tax = input("What is the tax percent?\n")
            if not self.check_float(tax):
                continue
            price_per_dozen = input("What is the price per dozen of your cookie?\n")
            if not self.check_float(price_per_dozen):
                continue
            amount = input("How many cookies would you like?\n")
            if not self.check_float(amount):
                continue

            return Cookies(name, float(tax), float(price_per_dozen), float(amount))
        
    def user_prompt_icecream(self):
        while True:
            name = input("What is the name of your ice cream?\n")
            tax = input("What is the tax percent?\n")
            if not self.check_float(tax):
                continue
            price_per_scoop = input("What is the price per scoop of your ice cream?\n")
            if not self.check_float(price_per_scoop):
                continue
            scoops = input("How many scoops would you like?\n")
            if not self.check_float(scoops):
                continue

            return IceCream(name, float(tax), float(price_per_scoop), float(scoops))
        
    def user_prompt_sundae(self):
        while True:
            name = input("What is the name of your ice cream?\n")
            tax = input("What is the tax percent?\n")
            if not self.check_float(tax):
                continue
            price_per_scoop = input("What is the price per scoop of your ice cream?\n")
            if not self.check_float(price_per_scoop):
                continue
            scoops = input("How many scoops would you like?\n")
            if not self.check_float(scoops):
                continue
            topping = input("What topping would you like?\n")
            topping_price = input("What is the price of that topping?\n")
            if not self.check_float(topping_price):
                continue

            return Sundae(name, float(tax), float(price_per_scoop), float(scoops), topping, float(topping_price))


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