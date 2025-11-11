from dataclasses import dataclass, field
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