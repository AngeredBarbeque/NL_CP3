import time
import csv
from file_management import *
from game import *
from InquirerPy import inquirer
def main():
    while True:
        gen, baby, animals, hard_gen, sci = read_questions()
        print("Hello!")
        action = inquirer.select(
            message = 'What would you like to  do?',
            choices = [
                'Sign in as an admin',
                'Take a quiz',
                'Create quiz questions',
                'Exit'
            ]
        ).execute()
        if action == 'Sign in as an admin':
            return
        elif action == 'Take a quiz':
            category = inquirer.select(
                message = "Please select a category of questions!",
                choice = [
                    'General',
                    'Baby',
                    'Animals',
                    'Hard General',
                    'Science',
                    'Custom'
                ]
            ).execute()
            if category == 'General':
                category = gen
            elif category == 'Baby':
                category = baby
            elif category == 'Animals':
                category = animals
            elif category == 'Hard General':
                category = hard_gen
            elif category == 'Science':
                category = sci
            else:
                return
            game_start(category)
        elif action == 'Create quiz questions':
            return
        else:
            print('Goodbye!')
            exit()