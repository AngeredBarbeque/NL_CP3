from dataclasses import dataclass, field
from collections import namedtuple
from operator import attrgetter

#named tuples
Color = namedtuple("Color", ['red','green','blue'])
red = Color(225,0,0)

#data classes
@dataclass(order=True,frozen=True)
class Person:
    sort_index: int = field(init=False,repr=False)
    name: str
    job: str
    age: int
    def __post_init__(self):
        object.__setattr__(self,'sort_index',self.age)

person1 = Person("Tia", "Sales", 29)
person2 = Person("Katie", "Dispatch", 35)
person3 = Person("Katie", "Dispatch", 35)

print(person2 == person3)
print(person1)
print(person1 > person2)

#Sorted lists/arrays/tuples/sets
people = [person1,person2,person3]
nums = [1,53,851,86,4,864,7,651,68,654]
sort_nums = sorted(nums, reverse=True)
print(sort_nums)

#def age_sort(person):
#    return person.age
#sort_people = sorted(people, key=lambda person: person.name)

sort_people = sorted(people, key=attrgetter('job'))
print(sort_people)

def hello(*name):
    for i in name:
        print(f'Hello {i}!')
hello("Tate","Aanda","Back surgery")

def another_hello(**names):
    try:
        names['mname']
    except:
        print(f"Hello {names['fname']} {names['lname']}.")
    else:
        print(f"Hello {names['fname']} {names['mname']} {names['lname']}.")

another_hello(fname="Hank",lname="Breadcube")