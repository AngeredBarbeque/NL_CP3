#include <iostream>
using namespace std;

int board[3][3] = {
    {1,2,3}, 
    {4,5,6}, 
    {7,8,9}};
int len = size(board);

void print_board(int board[]) {
    for (int i=0; i < len; i++) {
        int row[3] = board[i];
        for (int j=0; j < size(row); j++) {
            cout << row[j];
            if (j != 2) {
                cout << '|';
            }
        cout << endl;
        if (i != 2) {
            cout << '-----';
        }
        }
    }
    } 


int main() {
    cout << len << endl;
    return 0;
}

/* 
def printBoard(board):
    for idx, item in enumerate(board):
        for index, i in (enumerate(item)):
            print(i, end = "")
            if index != 2:
                print("|", end = "")
        print("")
        if idx != 2:
            print("-----")

def turn(row, column, letter):
        if board[row-1][column-1] == " ":
           board[row-1][column-1] = letter
           return True
        return False

def threeInARow(board, letter):
    for row in board:
        allSame = True
        for column in row:
            if column != letter:
                allSame = False
        if allSame:
            return True
    for column in range(3):
        allSame = True
        for row in board:
            if row[column] != letter:
                allSame = False
        if allSame:
            return True
    allSame = True
    for index in range(3):
        if not board[index][index] == letter:
            allSame = False
    if allSame:
        return True
    allSame = True
    for index in range(3):
        if not board[index][2 - index] == letter:
            allSame = False
    if allSame:
        return True
    return False
def endGame(board):
    if threeInARow(board, "X"):
        print("X Wins!")
        printBoard(board)
        exit()
    if threeInARow(board, "O"):
        print("O Wins!")
        printBoard(board)
        exit()
    allFull = True
    for row in board:
        for column in row:
            if column == " ":
                allFull = False
    if allFull:
        print("Cat wins!")
        printBoard(board)
        exit()
print("Hello! Welcome to tic-tac-toe! You will be X.")
while True:
    playerRow = int(input("Which row would you like to go in?"))
    playerColumn = int(input("Which column would you like to go in?"))
    if not turn(playerRow, playerColumn, "X"):
        print("Oops! Try again! Idiot.")
        continue
    endGame(board)
    while True:
        compRow = random.randint(1, 3)
        compColumn = random.randint(1, 3)
        if turn(compRow, compColumn, "O"):
            endGame(board)
            break
        else:
            continue
    printBoard(board) */