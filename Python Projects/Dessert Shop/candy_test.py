from dessert import *

def test_defaults():
    test = Candy()
    assert test.name == ""
    assert test.pfp == 0.0
    assert test.amount == 0