from pieces import *

#Creates all pieces and returns a chessGame with all pieces.
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
    wbishopa = Bishop("white", Position(3,1,"♗"))
    wbishopb = Bishop("white", Position(6,1,"♗"))
    wking = King("white",Position(5,1,"♔"))
    wqueen = Queen("white",Position(4,1,"♕"))

    bpawna = Pawn("black", Position(1,7,"♟"))
    bpawnb = Pawn("black", Position(2,7,"♟"))
    bpawnc = Pawn("black", Position(3,7,"♟"))
    bpawnd = Pawn("black", Position(4,7,"♟"))
    bpawne = Pawn("black", Position(5,7,"♟"))
    bpawnf = Pawn("black", Position(6,7,"♟"))
    bpawng = Pawn("black", Position(7,7,"♟"))
    bpawnh = Pawn("black", Position(8,7,"♟"))
    brooka = Rook("black", Position(1,8,"♜"))
    brookb = Rook("black", Position(8,8,"♜"))
    bknighta = Knight("black", Position(2,8,"♞"))
    bnkightb = Knight("black", Position(7,8,"♞"))
    bbishopa = Bishop("black", Position(3,8,"♝"))
    bbishopb = Bishop("black", Position(6,8,"♝"))
    bking = King("black",Position(5,8,"♚"))
    bqueen = Queen("black",Position(4,8,"♛"))

    black_list = [
    bpawna,
    bpawnb,
    bpawnc,
    bpawnd,
    bpawne,
    bpawnf,
    bpawng,
    bpawnh,
    brooka,
    brookb,
    bknighta,
    bnkightb,
    bbishopa,
    bbishopb,
    bking,
    bqueen
    ]
    white_list = [
        wpawna,
        wpawnb,
        wpawnc,
        wpawnd,
        wpawne,
        wpawnf,
        wpawng,
        wpawnh,
        wrooka,
        wrookb,
        wknighta,
        wnkightb,
        wbishopa,
        wbishopb,
        wking,
        wqueen
    ]
    game = ChessGame(white_list, black_list)
    return game


#Prints the board in an appealing way
def printBoard(piece_list):
    print(' -------------------------')
    for row in range(8,0,-1):
        for col in range(8,0,-1):
            symbol = " "
            for i in piece_list:
                if i.pos.row == row and i.pos.col == col:
                    symbol = i.pos.sym
            if col == 1:
                print(f" |{symbol} |")
                print(' -------------------------')
            else:
                print(f" |{symbol}",end='')

#Moves pieces
def main():
    game = pieces()
    piece_list = game.getPieces()
    printBoard(piece_list)
    game.move(game.black_pieces[0], Position(1,6))
    game.move(game.black_pieces[4],Position(5,6))
    game.move(game.white_pieces[10],Position(3,3))
    game.move(game.black_pieces[15],Position(4,1))
    game.move(game.white_pieces[12],Position(7,5))
    print("Moved Pieces!")
    piece_list = game.getPieces()
    printBoard(piece_list)

    


main()