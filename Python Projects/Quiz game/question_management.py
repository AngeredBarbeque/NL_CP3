import csv
from file_management import write_questions

'[row[0],row[1],[row[2],row[3],row[4],row[5]]]'

def create_questions():
    questions = []
    amount = input("How many questions would you like to create? (Must be 10 or more.)\n")
    try:
        int(amount)
    except:
        print("Please enter a number.")
        return
    amount = int(amount)
    if amount < 10:
        print("Please enter a number higher than 10.")
        return
    category = input("What would you like to name this category?")
    for i in range(amount):
        question = input("What is the question?")
        cor_ans = input("What is the correct answer?")
        ans_two = input("What is one of the wrong answers?")
        ans_three = input("What is one of the wrong answers?")
        ans_four = input("What is one of the wrong answers?")
        questions.append(f'{category},{question},{cor_ans},{ans_two},{ans_three},{ans_four}')
    write_questions(questions)
    print("Success!")
    return

def sort_categories(other):
    categories = []
    for i in other:
        if i[0] not in categories:
            categories.append(i[0])
    return categories

def sort_other(categories, other):
    #MAKE THIS
    pass
             