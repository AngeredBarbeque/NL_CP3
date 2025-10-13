
class Student:
    """Student class including id number, name, and grade.
    Methods to change grade, get grade, and print class.
    """
    id: int
    name: str
    grade: int
    def __init__(self, id = 000, name = "John Doe", grade = 100):
        """Sets values"""
        self.id = id
        self.name = name
        self.grade = grade
    def changeGrade(self):
        """Changes grade based on user inputs"""
        choice = input(f"Would you like to:\n1: Increase grade for {self.name}\n2: Decrease grade for {self.name}\n")
        change = int(input("What would you like to change the grade by?\n"))
        if choice == "1":
            if self.grade + change > 100:
                print("Extra credit? Nice!")
            self.grade += change
        elif choice == "2":
            if self.grade - change < 0:
                print("Oof, man. Negative grade? Yikes.\n")
            self.grade -= change
        else:
            print("Please enter 1 or 2")
    def getGrade(self):
        """Returns the grade"""
        return self.grade
    def __str__(self):
        """Decides what happens when you try to print the whole class."""
        return f"Student ID: {self.id}, Name: {self.name}, Grade: {self.getGrade()}"

#Defines class instances
luke = Student(112, "Luke Murdock", 100)
darius = Student(4, "Darius WheneverIHavetoPutInMyNameForThings", 93)
alex = Student(6, "Alex Anderson", 6)
darius_two = Student(42, "Darius Two", 932)
john = Student()
bart = Student(name="Bart Anthony")
hank = Student(1,"Hank")

#Prints each instance
print(luke)
print(darius)
print(alex)
print(darius_two)
print(john)
print(bart)
print(hank)

#Changes grades and prints changed grades
luke.changeGrade()
bart.changeGrade()
hank.changeGrade()
print(f"Grades changed:\n{luke.name}: {luke.getGrade()}\n{bart.name}: {bart.getGrade()}\n{hank.name}: {hank.getGrade()}\n")
