from pieces import *

def pieces():
    wpawna = Pawn("white", Position(1,2,"♙"))
    wpawnb = Pawn("white", Position(2,2,"♙"))
    wpawnc = Pawn("white", Position(3,2,"♙"))
    wpawnd = Pawn("white", Position(4,2,"♙"))
    wpawne = Pawn("white", Position(5,2,"♙"))
    wpawnf = Pawn("white", Position(6,2,"♙"))
    wpawng = Pawn("white", Position(7,2,"♙"))
    wpawnh = Pawn("white", Position(8,2,"♙"))

    wrooka = Rook("white", Position(1,1,"♖"))
    wrookb = Rook("white", Position(8,1,"♖"))

    wknighta = Knight("white", Position(2,1,"♘"))
    wnkightb = Knight("white", Position(7,1,"♘"))

    wbishopa = Bishop()






    bpawna = Pawn("black", Position(1,7,"♟"))
    bpawnb = Pawn("black", Position(2,7,"♟"))
    bpawnc = Pawn("black", Position(3,7,"♟"))
    bpawnd = Pawn("black", Position(4,7,"♟"))
    bpawne = Pawn("black", Position(5,7,"♟"))
    bpawnf = Pawn("black", Position(6,7,"♟"))
    bpawng = Pawn("black", Position(7,7,"♟"))
    bpawnh = Pawn("black", Position(8,7,"♟"))

def printBoard(board):
    for i in board:
            if i.col == 8:
                print(f" |{i.sym} |")
                print(' -------------------------')
            else:
                print(f" |{i.sym}",end='')

def main():
    board = [Position(1,8,"♜"), Position(2,8,'♞'), Position(3,8,"♝"), Position(4,8,"♛"), Position(5,8,"♚"), Position(6,8,"♝"), Position(7,8,"♞"), Position(8,8,"♜"),
             Position(1,7,"♟"), Position(2,7,"♟"), Position(3,7,"♟"), Position(4,7,"♟"), Position(5,7,"♟"), Position(6,7,"♟"), Position(7,7,"♟"), Position(8,7,"♟"),
             Position(1,6), Position(2,6), Position(3,6), Position(4,6), Position(5,6), Position(6,6), Position(7,6), Position(8,6), 
             Position(1,5), Position(2,5), Position(3,5), Position(4,5), Position(5,5), Position(6,5), Position(7,5), Position(8,5), 
             Position(1,4), Position(2,4), Position(3,4), Position(4,4), Position(5,4), Position(6,4), Position(7,4), Position(8,4), 
             Position(1,3), Position(2,3), Position(3,3), Position(4,3), Position(5,3), Position(6,3), Position(7,3), Position(8,3),
             Position(1,2,"♙"), Position(2,2,"♙"), Position(3,2,"♙"), Position(4,2,"♙"), Position(5,2,"♙"), Position(6,2,"♙"), Position(7,2,"♙"), Position(8,2,"♙"), 
             Position(1,1,"♖"), Position(2,1,"♘"), Position(3,1,"♗"), Position(4,1,"♕"), Position(5,1,"♔"), Position(6,1,"♗"), Position(7,1,"♘"), Position(8,1,"♖"),]
    
    while True:
        while True:
            print("- - - - White's Turn! - - - -")
            printBoard(board)
            column = input("What is the collumn of the piece you want to move?")
            row = input("What is the row of the piece you want to move?")
            try:
                int(column)
                int(row)
            except:
                print("Please enter numbers.")
                continue
            for i in 




main()