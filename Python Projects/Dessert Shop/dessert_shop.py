from dessert import *

def main():
    order = Order()
    gummy = Candy("Gummy Bears", 1.5, 0.25)
    corn = Candy("Candy Corn", 0.35, 0.25)
    chocolate = Cookies("Chocolate Chip", 3.99, 6)
    oat = Cookies("Oatmeal Raisin", 3.45, 2)
    pistachio = IceCream("Pistachio",0.79, 2)
    vanilla = Sundae("Vanilla",0.69,3,"Fudge",1.29)
    order.add(gummy)
    order.add(corn)
    order.add(chocolate)
    order.add(pistachio)
    order.add(oat)
    order.add(vanilla)
    for i in order.order:
        print(i.name)
    print(len(order))

main()