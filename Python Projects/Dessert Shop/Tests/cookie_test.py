from dessert import *

def test_defaults():
    test = Cookies()
    assert test.name == ""
    assert test.price_per_dozen == 0.0
    assert test.amount == 0
    assert test.tax_percent == 7.25
    assert test.calculateTax() == 0.0
    assert test.calculateCost() == 0

def test_set():
    test = Cookies("Test",3,1,12)
    assert test.name == "Test"
    assert test.price_per_dozen == 1
    assert test.amount == 12
    assert test.tax_percent == 3
    assert test.calculateTax() == 0.03
    assert test.calculateCost() == 1


def test_change():
    test = Cookies("Test",3,1,2)
    test.name = "Test 2"
    test.price_per_dozen = 2
    test.amount = 12
    test.tax_percent = 4
    assert test.name == "Test 2"
    assert test.price_per_dozen == 2
    assert test.amount == 12
    assert test.tax_percent == 4
    assert test.calculateCost() == 2
    assert test.calculateTax() == 0.08