from dessert import *

def test_defaults():
    test = Candy()
    assert test.name == ""
    assert test.pfp == 0.0
    assert test.amount == 0

def test_set():
    test = Candy("Test",1,2)
    assert test.name == "Test"
    assert test.pfp == 1
    assert test.amount == 2

def test_change():
    test = Candy("Test",1,2)
    test.name = "Test 2"
    test.pfp = 2
    test.amount = 3
    assert test.name == "Test 2"
    assert test.pfp == 2
    assert test.amount == 3