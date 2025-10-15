# What is a parent/abstract class?
# A class with attributes that all child classes also have

# How do you create a child class?
#class Dog(Animal):

# How does a child class inherit from the parent class?
# super().methodname

# What are class diagrams?
# Diagrams that assist in visualizing things about a class, its attributes, and its methods.
# They are mainly useful in seeing how classes interact with each other.

# How are class diagrams used to show a parent/child relationship?
# They can use arrows to connect them to show inheritence

# How do you overload operators in a class?
#def __eq__(self, other):
#        return (self.age == other.age and 
#                self.color == other.color and 
#                self.owner == other.owner and 
#                self.bread == other.bread and 
#                self.name == other.name)

# What are test cases?
# A function that checks that your code meets certain conditions.

# Why do we use test cases?
# to make sure we don't break our code, help us to write preloaded cases to ensure things work as intended

# How do we create test cases?
# Create tests in seperate files, using assert keyword to check things.

class Animal():

    def __init__(self, age, color):
        self.age = age
        self.color = color

    def move(self):
        return

    def __eq__(self, other):
        return (self.age == other.age and self.color == other.color)

    def __str__(self):
        return f"Age: {self.age}\nColor: {self.color}"
    
class Dog(Animal):
    def __init__(self, age, color, owner, bread, name):
        super().__init__(age, color)
        self.owner = owner
        self.bread = bread
        self.name = name

    def __eq__(self, other):
        return (self.age == other.age and 
                self.color == other.color and 
                self.owner == other.owner and 
                self.bread == other.bread and 
                self.name == other.name)
    
    def move(self):
        print("Run.")

    def __str__(self):
        return f"Name: {self.name}\nAge: {self.age}\nColor: {self.color}\nOwner: {self.owner}\nBread: {self.bread}"
    
bobby = Dog(5, "brown", "Jill", "Wheat Bread", "Bobby")
tate = Dog(1, "Black", "Nikke", "Lab Grown", "Tate")
alex = Animal(16,"White")
nick = Animal(15, "White")

print(bobby.move())
print(alex)

print(alex == nick)
print(bobby==tate)