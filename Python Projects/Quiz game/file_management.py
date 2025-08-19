import csv
import random
def read_questions():
    gen = []
    baby = []
    animals = []
    hard_gen = []
    sci = []
    other = []
    with open('Python Projects/Quiz game/questions.csv',mode='r') as file:
        reader = csv.reader(file)
        next(reader)
        row_num = 2
        for row in reader:
            if row_num <= 51:
                gen.append([row[1],[row[2],row[3],row[4],row[5]]])
            elif row_num > 51 and row_num <= 101:
                baby.append([row[1],[row[2],row[3],row[4],row[5]]])
            elif row_num > 101 and row_num <= 151:
                animals.append([row[1],[row[2],row[3],row[4],row[5]]])
            elif row_num > 151 and row_num <= 201:
                hard_gen.append([row[1],[row[2],row[3],row[4],row[5]]])
            elif row_num > 201 and row_num <= 251:
                sci.append([row[1],[row[2],row[3],row[4],row[5]]])
            else:
                other.append([row[0],[row[1],[row[2],row[3],row[4],row[5]]]])
            row_num += 1
        random.shuffle(gen)
        random.shuffle(baby)
        random.shuffle(animals)
        random.shuffle(hard_gen)
        random.shuffle(sci)
        random.shuffle(other)
    return gen, baby, animals, hard_gen, sci, other

def write_questions(questions):
    with open('Python Projects/Quiz game/questions.csv',mode='a',newline='') as file:
        writer = csv.writer(file, delimiter=',')
        for i in questions:
            writer.writerow(i)

    