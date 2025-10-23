from dessert import *

def test_defaults():
    test = Cookies()
    assert test.name == ""
    assert test.price_per_dozen == 0.0
    assert test.amount == 0

def test_set():
    test = Cookies("Test",1,2)
    assert test.name == "Test"
    assert test.price_per_dozen == 1
    assert test.amount == 2

def test_change():
    test = Cookies("Test",1,2)
    test.name = "Test 2"
    test.price_per_dozen = 2
    test.amount = 3
    assert test.name == "Test 2"
    assert test.price_per_dozen == 2
    assert test.amount == 3