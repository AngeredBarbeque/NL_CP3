import csv
gen = []
baby = []
animals = []
hard_gen = []
sci = []

def read_questions():
    with open('Python Projects\Quiz game\questions.csv') as file:
        reader = csv.reader(file)
        next(reader)
        row_num = 2
        for row in reader:
            if row_num <= 51:
                gen.append(row[0],[row[1],row[2],row[3],row[4]])
            elif row_num > 51 and row_num <= 101:
                baby.append(row[0],[row[1],row[2],row[3],row[4]])
            elif row_num > 101 and row_num <= 151:
                animals.append(row[0],[row[1],row[2],row[3],row[4]])
            elif row_num > 151 and row_num <= 201:
                hard_gen.append(row[0],[row[1],row[2],row[3],row[4]])
            elif row_num > 201 and row_num <= 251:
                sci.append(row[0],[row[1],row[2],row[3],row[4]])
            else:
                print("Sorry, it seems there are additional rows in the csv file.")
    