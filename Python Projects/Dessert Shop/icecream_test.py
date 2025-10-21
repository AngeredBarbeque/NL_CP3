from dessert import *

def test_defaults():
    test = IceCream()
    assert test.name == ""
    assert test.pps == 0.0
    assert test.scoops == 0

def test_set():
    test = IceCream("Test",1,2)
    assert test.name == "Test"
    assert test.pps == 1
    assert test.scoops == 2

def test_change():
    test = IceCream("Test",1,2)
    test.name = "Test 2"
    test.pps = 2
    test.scoops = 3
    assert test.name == "Test 2"
    assert test.pps == 2
    assert test.scoops == 3