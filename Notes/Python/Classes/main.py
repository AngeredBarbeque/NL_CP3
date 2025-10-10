#NL Classes (Python)

#               What is a class?
# An abstraction of an object; A zoomed out version of the thing the class represents.

#              What is an object?
# An instance of a class.

#      How is a class a form of encapsulation? 
# It allows you to take all the information of a concept and put them together rather than spreading them throughout.

#    How is a class an abstraction of an object?
# Abstraction is one level further from the specifics, and classes abstract away from the specifics.

#    How do you access information in an object?
# Using getter functions.

#         How do you initialize a class?
#class Person:
#    def __init__(self, first_name, last_name, age, pickled_herrings):
#        self.first_name = first_name
#        self.last_name = last_name
#        self.age = age
#        self.pickled_herrings = pickled_herrings
    

#         How do you set a default value 
# def __init__(self, first_name="John", last_name="Smith", age=0, pickled_herrings=10):

#          How do you use type hinting?
#  class Person:
#    first_name: str
#    last_name: str
#    age: int
#    pickled_herrings: int
#           Or
#  def full(self) -> str:

#    How do you set an attribute to be private?
# using a '_' in front of the variable name.

#       How do you make a class method?
#def full(self):
#        return self.first_name + " " + self.last_name

#       Why do we include docstrings?
# a way to document what a class does. Basically just multiline comments.

#   What does "self" do as a parameter for class methods?
# Tells the method to refer to the instance of the class, rather than all instances.

#       What are getter and setter methods?
# A setter function allows you to set/change information
# A getter function allows you to see information

#           What are magic methods?
# Special methods starting and ending with "__"

#    Where are class objects saved? (heap or stack?)
# Heap


class Person:
    """Person class with first and last names, age, and pickled herring count. 
    Method to get full name, and method to increase age by one."""
    first_name: str
    last_name: str
    age: int
    pickled_herrings: int
    def __init__(self, _first_name="John", last_name="Smith", age=0, pickled_herrings=10):
        """Sets all values"""
        self._first_name = _first_name
        self.last_name = last_name
        self.age = age
        self.pickled_herrings = pickled_herrings

    def setAge(self): #setter
        """Increases age by one."""
        self.age += 1

    def full(self) -> str: #getter
        """Returns a full name."""
        return self._first_name + " " + self.last_name
    
    def __str__(self):
        """Determines how people are printed."""
        return f"{self.full()} is {self.age} years old, with {self.pickled_herrings} pickled herrings."


tia = Person("Tia","LaRose",28,5)
alex = Person("Alex","Anderson",16,21)
tia.setAge()

print(tia)
print(alex)