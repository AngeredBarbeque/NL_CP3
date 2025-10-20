from dessert import *

def main():
    order = Order()
    gummy = Candy("Gummy Bears", 1.25, 0.34)
    corn = Candy("Candy Corn", 0.36, 2.45)
    chocolate = Cookies("Chocolate Chip", 2.17, 6)
    mint = IceCream("Mint Chocolate Chip",1.66,2)
    cream = IceCream("Cookies and Cream",1.52,1)
    vanilla = Sundae("Vanilla",1.0,2,"Fudge",0.33)
    order.add(gummy)
    order.add(corn)
    order.add(chocolate)
    order.add(mint)
    order.add(cream)
    order.add(vanilla)
    for i in order.order:
        print(i.name)
    print(len(order))

main()