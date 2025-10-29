from dessert import *
from tabulate import tabulate

#data = [["Bruce Wayne", "Bat", 2], ["Bruce Payne", "Bat 2", 4], ["Johnny", "Teeth", 34]]
#print(tabulate(data, headers=["Name", "Misc", "Number"]))

#Creates an order object containing instances of all child/grandchild classes 
#Prints each item in the order, and then prints the length of it
def main():
    shop = DessertShop
    order = Order()
    prompt = '\n'.join([ '\n',
            '1: Candy',
            '2: Cookie',            
            '3: Ice Cream',
            '4: Sundae',
            '\nWhat would you like to add to the order? (1-4, Enter for done): '
      ])
    done = False
    while not done:
      choice = input(prompt)
      match choice:
        case '':
          done = True
        case '1':            
          item = shop.user_prompt_candy()
          order.add(item)
          print(f'{item.name} has been added to your order.')
        case '2':            
          item = shop.user_prompt_cookie()
          order.add(item)
          print(f'{item.name} has been added to your order.')
        case '3':            
          item = shop.user_prompt_icecream()
          order.add(item)
          print(f'{item.name} has been added to your order.')
        case '4':            
          item = shop.user_prompt_sundae()
          order.add(item)
          print(f'{item.name} has been added to your order.')
        case _:            
          print('Invalid response:  Please enter a choice from the menu (1-4) or Enter')
    data = []
    for i in order.order:
        data.append([i.name, f"${round(i.calculateCost(),2)}", f"${round(i.calculateTax(),2)}"])
    print(tabulate(data, headers=["Item","Cost","Tax"]))
    print("----------------------------------")
    print(tabulate([[f"${round(order.orderCost(),2)}", f"${round(order.orderTax(),2)}"]], headers=["Subtotal","Total Tax"]))
    print("----------------------------------")
    print(tabulate([[f"${round(order.orderCost(), 2) + round(order.orderTax(), 2)}"]], headers=["Total"]))
    

main()