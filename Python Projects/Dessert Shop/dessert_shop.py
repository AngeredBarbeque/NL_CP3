from dessert import *
from tabulate import tabulate

#data = [["Bruce Wayne", "Bat", 2], ["Bruce Payne", "Bat 2", 4], ["Johnny", "Teeth", 34]]
#print(tabulate(data, headers=["Name", "Misc", "Number"]))

#Creates an order object containing instances of all child/grandchild classes 
#Prints each item in the order, and then prints the length of it
def main():
    order = Order()
    gummy = Candy("Gummy Bears", 10, 1.5, 0.25)
    corn = Candy("Candy Corn", 10, 0.35, 0.25)
    chocolate = Cookies("Chocolate Chip", 10, 3.99, 6)
    oat = Cookies("Oatmeal Raisin", 10, 3.45, 2)
    pistachio = IceCream("Pistachio", 10, 0.79, 2)
    vanilla = Sundae("Vanilla", 10, 0.69,3,"Fudge",1.29)
    order.add(gummy)
    order.add(corn)
    order.add(chocolate)
    order.add(pistachio)
    order.add(oat)
    order.add(vanilla)
    for i in order.order:
        print(i.name)
    print(len(order))
    data = []
    for i in order.order:
        data.append([i.name, f"${round(i.calculateCost(),2)}", f"${round(i.calculateTax(),2)}"])
    print(tabulate(data, headers=["Item","Cost","Tax"]))
    print("----------------------------------")
    print(tabulate([[f"${round(order.orderCost(),2)}", f"${round(order.orderTax(),2)}"]], headers=["Subtotal","Total Tax"]))
    print("----------------------------------")
    print(tabulate([[f"${round(order.orderCost(), 2) + round(order.orderTax(), 2)}"]], headers=["Total"]))
    

main()