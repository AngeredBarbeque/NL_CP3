from dessert import *

def test_defaults():
    test = Candy()
    assert test.name == ""
    assert test.price_per_pound == 0.0
    assert test.amount == 0
    assert test.tax_percent == 7.25
    assert test.calculateTax() == 0
    assert test.calculateCost() == 0

def test_set():
    test = Candy("Test",3,1,2,)
    assert test.name == "Test"
    assert test.price_per_pound == 1
    assert test.amount == 2
    assert test.tax_percent == 3
    assert test.calculateCost() == 2
    assert test.calculateTax() == 0.06

def test_change():
    test = Candy("Test",3,1,2)
    test.name = "Test 2"
    test.price_per_pound = 2
    test.amount = 3
    test.tax_percent = 4
    assert test.name == "Test 2"
    assert test.price_per_pound == 2
    assert test.amount == 3
    assert test.calculateCost() == 6
    assert test.calculateTax() == 0.24