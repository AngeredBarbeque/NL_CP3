import time
from InquirerPy import inquirer
def game_start(question_set):
    for i in range(10):
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
            print("")