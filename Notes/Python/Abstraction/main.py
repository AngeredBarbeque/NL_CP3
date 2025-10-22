# NL 3rd Abstract Classes Notes
#               Why can't you create an object from an abstract class?
# They are too abstract that an object would not work.
#
#               How do abstract classes and abstract methods work together?
# An Abstract class has to have an abstract method, and abstract methods are specifically made to get changed in child classes
#
#               What does abc stand for?
# Abstract Base Class
#
#               What are decorators? 
# things like @abstractmethod, alwasy begin with @ and give further information about what will follow.
# In the case of @abstreactmethod, it says that the next method will be abstract
#
#               What is an abstract method?
# A method intended to be overwritten by child classes
#
#               What is a concrete method?
# Normally written methods
#
#               What is an abstract class?
# A class that exists entirely to be a parent class, you can't make an object from it, and has to have at least one abstract method
# They are designed to be overwritten
#
#               How do you make an abstract method?
# @abstractmethood
# def method(self):
# pass
#
#               How can you create a class that inherits from multiple parent classes?
# class SeaLion(Aquatic, Quadrupeds):
#
#               Why does the inheritance order matter?
# Whichever class you put first, take higher priority which changed your methods.
#
#               What does the mro() method do when you call it on a class?
# Tells you what version of the method is taking priority.
#
#               What is Method resolution order?
# The order of priority for different classes during inheritance
# The first takes the highest priority, the last takes the lowest
#
from abc import ABC, abstractmethod

class Animal(ABC):
    def __init__(self, name):
        self.name = name
    @abstractmethod
    def move(self):
        pass
    def __str__(self):
        return self.name

class Quadrupeds(Animal):
    def __init__(self,name):
        super().__init__(name)

    def move(self):
        print(f"{self.name} W A L K S.")

class Aquatic(Animal):
    def __init__(self,name):
        super().__init__(name)

    def move(self):
        print(f"{self.name} S W I M S.")

class SeaLion(Aquatic, Quadrupeds):
    def __init__(self, name):
        super().__init__(name)
    
    def eats(self):
        print(f"{self.name} eats penguins and krill.")

sealion = SeaLion("Greg")
print(sealion)
sealion.move()
sealion.eats()
print(Aquatic.mro())