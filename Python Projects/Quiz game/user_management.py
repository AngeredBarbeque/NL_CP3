import csv

#Creats a list of users and passwords
def read_users():
    users = []
    with open('Python Projects/Quiz game/users.csv',mode='r') as file:
        reader = csv.reader(file)
        next(reader)
        for i in reader:
            users.append([i[0],i[1]])
    return users

def sign_in():
    admins = read_users()
    username = input("Please enter your username.\n").lower()
    password = input("Please enter your password.\n")
    #Checks if your inputs match a username and password
    for i in admins:
        if i[0].lower() == username and i[1] == password:
            print(f'Success! Signed in as {i[0]}')
            return True
    print("Sign in failed.")
    return False