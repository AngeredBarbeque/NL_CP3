import csv
from file_management import write_questions

def create_questions():
    questions = []
    amount = input("How many questions would you like to create? (Must be 10 or more.)\n")
    #Ensures they input a number
    try:
        int(amount)
    except:
        print("Please enter a number.")
        return
    amount = int(amount)
    if amount < 10:
        print("Please enter a number higher than 10.")
        return
    category = input("What would you like to name this category?\n")
    if category == '':
        print("Please enter something for the category name.\n")
        return
    #Asks them for question and answer once for each question they said they wanted.
    for i in range(amount):
        question = input("What is the question?\n")
        cor_ans = input("What is the correct answer?\n")
        ans_two = input("What is one of the wrong answers?\n")
        ans_three = input("What is one of the wrong answers?\n")
        ans_four = input("What is one of the wrong answers?\n")
        if question == '' or cor_ans == '' or ans_two == '' or ans_three == '' or ans_four == '':
            print("Please enter something for the question and all answers.")
            return
        #Creates a list of questions
        questions.append(f'{category}{question}{cor_ans}{ans_two}{ans_three}{ans_four}')
    #Writes the questions
    write_questions(questions)
    print("Success!")
    return

#Begins the process of sorting by creating a list of category names
def sort_categories(other):
    categories = []
    for i in other:
        if i[0] not in categories:
            categories.append(i[0])
    return sort_other(categories, other)

#Continues to sort by creating a list of categories arranged as dictionaries
def sort_other(categories, other):
    dict_categories = []
    for i in categories:
        dict_categories.append(create_category(other,i))
    return dict_categories

#Creates a category and arranges it as a dictionary
def create_category(other, category):
    questions = []
    for i in other:
        if i[0] == category:
            questions.append([i[1][0],[i[1][1][0],i[1][1][1],i[1][1][2],i[1][1][3]]])
    dict_category = {
        category : questions
    }
    return dict_category