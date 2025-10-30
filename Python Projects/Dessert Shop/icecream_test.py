from dessert import *

def test_defaults():
    test = IceCream()
    assert test.name == ""
    assert test.price_per_scoop == 0.0
    assert test.scoops == 0
    assert test.tax_percent == 7.25
    assert test.calculateCost() == 0
    assert test.calculateTax() == 0

def test_set():
    test = IceCream("Test",3,1,2)
    assert test.name == "Test"
    assert test.price_per_scoop == 1
    assert test.scoops == 2
    assert test.tax_percent == 3
    assert test.calculateCost() == 2
    assert test.calculateTax() == 0.06

def test_change():
    test = IceCream("Test",3,1,2)
    test.name = "Test 2"
    test.price_per_scoop = 2
    test.scoops = 3
    test.tax_percent = 4
    assert test.name == "Test 2"
    assert test.price_per_scoop == 2
    assert test.scoops == 3
    assert test.tax_percent == 4
    assert test.calculateCost() == 6
    assert test.calculateTax() == 0.24