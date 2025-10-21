from dessert import *

def test_defaults():
    test = DessertItem()
    assert test.name == ""

def test_set():
    test = DessertItem("Test")
    assert test.name == "Test"

def test_change():
    test = DessertItem("Test")
    test.name = "Test 2"
    assert test.name == "Test 2"