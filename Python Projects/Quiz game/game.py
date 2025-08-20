import time
import random
import copy
from InquirerPy import inquirer

def game_start(question_set):
    score = 0
    #Creates a un-shuffled copy of the questions to use as a refrence later
    cor_questions = copy.deepcopy(question_set)
    for i in range(10):
        print(f"Question {i}:")
        #Suffles questions
        random.shuffle(question_set[i][1])
        #Starts the timer
        start = time.time()
        answer = inquirer.select(
            message = f'{question_set[i][0]}',
            choices = [
                question_set[i][1][0],
                question_set[i][1][1],
                question_set[i][1][2],
                question_set[i][1][3]
            ],
        ).execute()
        #Checks if the answer is the correct answer
        if answer == cor_questions[i][1][0]:
            end = time.time()
            print("Correct!")
            #Checks the time taken to complete the question
            total_time = end-start
            #Sets points based on how much time you took
            points = round(15 - total_time)
            if points < 0:
                points = 0
            score += points
            print(f"You earned {points} points!")
        else:
            print("Incorrect.")
            print("You earned 0 points.")
    print(f"You answered ten questions, earning {score} points!")
    return

