import csv

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
    username = input("Please enter your username.")
    password = input("Please enter your password.")
    for i in admins:
        if i[0] == username and i[1] == password:
            print(f'Success! Signed in as {i[0]}')
            return True
    print("Sign in failed.")
    return False