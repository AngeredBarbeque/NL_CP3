from dessert import *

def test_defaults():
    test = Sundae()
    assert test.name == ""
    assert test.price_per_scoop == 0.0
    assert test.scoops == 0
    assert test.topping == ""
    assert test.topping_price == 0

def test_set():
    test = Sundae("Test",1,2,"Topping",3)
    assert test.name == "Test"
    assert test.price_per_scoop == 1
    assert test.scoops == 2
    assert test.topping == "Topping"
    assert test.topping_price == 3

def test_change():
    test = Sundae("Test",1,2,"Topping",3)
    test.name = "Test 2"
    test.price_per_scoop = 2
    test.scoops = 3
    test.topping = "Topping 2"
    test.topping_price = 4
    assert test.name == "Test 2"
    assert test.price_per_scoop == 2
    assert test.scoops == 3
    assert test.topping == "Topping 2"
    assert test.topping_price == 4