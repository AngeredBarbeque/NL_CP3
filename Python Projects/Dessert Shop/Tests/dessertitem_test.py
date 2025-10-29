from dessert import *

def test_defaults():
    test = Candy()
    assert test.name == ""
    assert test.tax_percent == 7.25

def test_set():
    test = Candy("Test", 4)
    assert test.name == "Test"
    assert test.tax_percent == 4

def test_change():
    test = Candy("Test", 4)
    test.name = "Test 2"
    test.tax_percent = 5.5
    assert test.name == "Test 2"
    assert test.tax_percent == 5.5