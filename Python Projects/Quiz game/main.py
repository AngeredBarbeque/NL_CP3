import time
import csv
from file_management import *
from game import *
from InquirerPy import inquirer
from user_management import *
from question_management import *
def main():
    admin = False
    while True:
        gen, baby, animals, hard_gen, sci, other = read_questions()
        print("Hello!")
        if admin == False:
            action = inquirer.select(
                message = 'What would you like to  do?',
                choices = [
                    'Sign in as an admin',
                    'Take a quiz',
                    'Exit'
                ]
            ).execute()
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
            admin == False
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
            if category == 'General':
                category = gen.copy()
            elif category == 'Baby':
                category = baby.copy()
            elif category == 'Animals':
                category = animals.copy()
            elif category == 'Hard General':
                category = hard_gen.copy()
            elif category == 'Science':
                category = sci.copy()
            else:
                categories = sort_categories(other)
                
            game_start(category)
        elif action == 'Create quiz questions':
            create_questions()
        else:
            print('Goodbye!')
            exit()
main()