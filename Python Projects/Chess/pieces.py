from abc import ABC, abstractmethod

#Position object with column, row, and symbol
class Position():
    def __init__(self, col, row, sym=" "):
        self.col = col
        self.row = row
        self.sym = sym
    def hor(self, pos):
        if self.row == pos.row:
            return True
        else:
            return False
    def vert(self, pos):
        if self.col == pos.col:
            return True
        else:
            return False
    def diag(self, pos):
        if (self.col - pos.col) == (self.row - pos.row):
            return True
        else:
            return False

#Chess game consisting of two lists of white and black pieces
class ChessGame():
    def __init__(self, white_pieces, black_pieces):
        self.white_pieces = white_pieces
        self.black_pieces = black_pieces
    def move(self, piece, pos):
            before_piece = self.getPieceAt(pos)
            if before_piece:
                print(f"{before_piece.symbol()}  caputured by {piece.symbol()} !")
                self.remove(before_piece)
            piece.pos.row = pos.row
            piece.pos.col = pos.col
    def remove(self, piece):
        if piece.color == "black":
            self.black_pieces.remove(piece)
        else:
            self.white_pieces.remove(piece)
    def getPieces(self):
        return self.black_pieces + self.white_pieces
    def getPieceAt(self, pos):
        for i in self.white_pieces:
            if i.pos.row == pos.row and i.pos.col == pos.col:
                return i
        for i in self.black_pieces:
            if i.pos.row == pos.row and i.pos.col == pos.col:
                return i
        return 0

#abstract class for chess pieces
class ChessPiece(ABC):
    def __init__(self, color, pos):
        self.color = color
        self.pos = pos
    def getPos(self):
        return self.pos
    @abstractmethod
    def canMoveTo(self,new_pos):
        pass
    @abstractmethod
    def symbol(self):
        pass

#Pawn class
class Pawn(ChessPiece):
    def __init__(self, color, pos):
        super().__init__(color, pos)
    def canMoveTo(self, new_pos):
        if self.color == "black":
            if self.pos.col == new_pos.col and self.pos.row-new_pos.row == 1 and new_pos.row <=8 and new_pos.col <=8:
                return True
            else:
                return False
        elif self.color == "white":
            if self.pos.col == new_pos.col and self.pos.row-new_pos.row == -1 and new_pos.row <=8 and new_pos.col <=8:
                return True 
            else:
                return False
        else:
            return False
    def symbol(self):
        return self.pos.sym

#rook class
class Rook(ChessPiece):
    def __init__(self, color, pos):
        super().__init__(color, pos)
    def canMoveTo(self, new_pos):
        if (new_pos.hor(self.pos) or new_pos.vert(self.pos)) and new_pos.row <=8 and new_pos.col <=8:
            return True
        else:
            return False
    def symbol(self):
        return self.pos.sym

#knight class
class Knight(ChessPiece):
    def __init__(self, color, pos):
        super().__init__(color, pos)
    def canMoveTo(self, new_pos):
        if abs(self.pos.col - new_pos.col) == 1 and abs(self.pos.row - new_pos.row) == 2 and new_pos.row <=8 and new_pos.col <=8:
            return True
        elif abs(self.pos.col - new_pos.col) == 2 and abs(self.pos.row - new_pos.row) == 1 and new_pos.row <=8 and new_pos.col <=8:
            return False
    def symbol(self):
        return self.pos.sym

#bishop class
class Bishop(ChessPiece):
    def __init__(self, color, pos):
        super().__init__(color, pos)
    def canMoveTo(self, new_pos):
        if new_pos.diag(self.pos) and new_pos.row <=8 and new_pos.col <=8:
            return True
        else:
            return False
    def symbol(self):
        return self.pos.sym

#queen class
class Queen(ChessPiece):
    def __init__(self, color, pos):
        super().__init__(color, pos)
    def canMoveTo(self, new_pos):
        if (new_pos.hor(self.pos) or new_pos.vert(self.pos) or new_pos.diag(self.pos)) and new_pos.row <=8 and new_pos.col <=8:
            return True
        else:
            return False
    def symbol(self):
        return self.pos.sym

#king class
class King(ChessPiece):
    def __init__(self, color, pos):
        super().__init__(color, pos)
    def canMoveTo(self, new_pos):
        if abs(self.pos.row - new_pos.row) == 1 and abs(self.pos.col - new_pos.col) == 1 and new_pos.row <=8 and new_pos.col <=8:
            return True
        else:
            return False
    def symbol(self):
        return self.pos.sym