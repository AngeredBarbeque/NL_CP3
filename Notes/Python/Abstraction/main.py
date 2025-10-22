# NL 3rd Abstract Classes Notes
#               Why can't you create an object from an abstract class?
#
#
#               How do abstract classes and abstract methods work together?
#
#
#               What does abc stand for?
#
#
#               What are decorators? 
#
#
#               What is an abstract method?
#
#
#               What is a concrete method?
#
#
#               What is an abstract class?
# A class that exists entirely to be a parent class, you can't make an object from it, and has to have at least one abstract method
#
#               How do you make an abstract method?
#
#
#               How can you create a class that inherits from multiple parent classes?
#
#
#               Why does the inheritance order matter?
#
#
#               What does the mro() method do when you call it on a class?
#
#
#               What is Method resolution order?
#
#
from abc import ABC, abstractmethod

class Animal(ABC):
    def __init__(self, name):
        self.name = name
    