import time
from InquirerPy import inquirer
score = 0
def game_start(question_set):
    for i in range(10):
        #START PRINT DEBUGGING
        shuf_question_set = set(question_set[i][1])
        start = time.time()
        answer = inquirer.select(
            message = f'{shuf_question_set[i][0]}',
            choices = [
                shuf_question_set[i][1][0],
                shuf_question_set[i][1][1],
                shuf_question_set[i][1][2],
                shuf_question_set[i][1][3]
            ],
        ).execute()
        if answer == question_set[i][1][0]:
            end = time.time()
            print("Correct!")
            time = end-start
            points = round(15 - time)
            if points < 0:
                points = 0
            score += points
            print(f"You earned {points} points!")
        else:
            print("Incorrect.")
            print("You earned 0 points.")
    print(f"You annswered ten questions, earning {score} points!")
    return

