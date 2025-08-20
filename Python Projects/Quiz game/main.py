#imports necessary libraries
import time
import csv
from InquirerPy import inquirer
#Imports functions from other files
from file_management import *
from game import *
from user_management import *
from question_management import *
#Runs the main menu
def main():
    #Doesn't sign you in as an admin
    admin = False
    print("Hello!")
    #loops until user exits
    while True:
        #Reads the questions from the csv
        gen, baby, animals, hard_gen, sci, other = read_questions()
        #displays the non signed in options
        if admin == False:
            action = inquirer.select(
                message = 'What would you like to  do?',
                choices = [
                    'Sign in as an admin',
                    'Take a quiz',
                    'Exit'
                ]
            ).execute()
        #Displays the signed in options
        else:
            action = inquirer.select(
                message = 'What would you like to  do?',
                choices = [
                    'Sign out',
                    'Take a quiz',
                    'Create quiz questions',
                    'Exit'
                ]
            ).execute()
        if action == 'Sign in as an admin':
            admin = sign_in()
        elif action == 'Sign out':
            admin = False
            continue
        elif action == 'Take a quiz':
            category = inquirer.select(
                message = "Please select a category of questions!",
                choices = [
                    'General',
                    'Baby',
                    'Animals',
                    'Hard General',
                    'Science',
                    'Custom'
                ]
            ).execute()
            #Selects the correct category and starts game
            if category == 'General':
                category = gen.copy()
                game_start(category)
            elif category == 'Baby':
                category = baby.copy()
                game_start(category)
            elif category == 'Animals':
                category = animals.copy()
                game_start(category)
            elif category == 'Hard General':
                category = hard_gen.copy()
                game_start(category)
            elif category == 'Science':
                category = sci.copy()
                game_start(category)
            else:
                #Makes sure there are other questions
                try: 
                    other[0]
                except:
                    print("Please create a custom category first.")
                    continue
                #Creates a list of categories
                categories = sort_categories(other)
                categ_names = []
                for i in categories:
                    #Creates a list of category names
                    categ_names.append(list(i)[0])
                #Uses category names to let user select a custom category
                other_category = inquirer.select(
                    message = 'What custom category would you like?',
                    choices = categ_names
                ).execute()
                for i in categories:
                    #finds the correct category
                    if other_category == list(i)[0]:
                        category = i.copy()
                #Starts the game
                game_start(category[f'{other_category}'])
        elif action == 'Create quiz questions':
            create_questions()
        else:
            print('Goodbye!')
            exit()
main()