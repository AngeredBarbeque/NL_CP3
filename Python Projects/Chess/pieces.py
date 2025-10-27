from abc import ABC, abstractmethod

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

class ChessGame():
    def __init__(self, white_pieces, black_pieces):
        self.white_pieces = white_pieces
        self.black_pieces = black_pieces

class ChessPiece(ABC):
    def __init__(self, color, pos):
        self.color = color
        self.pos = pos
    def getPos(self):
        return self.pos
    @abstractmethod
    def move(self,new_pos):
        pass
    @abstractmethod
    def symbol(self):
        pass

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
        return "p"
    def move(self,new_pos):
        new_pos.symbol = self.symbol()
        self.pos = new_pos
    
class Rook(ChessPiece):
    def __init__(self, color, pos):
        super().__init__(color, pos)
    def canMoveTo(self, new_pos):
        if (new_pos.hor(self.pos) or new_pos.vert(self.pos)) and new_pos.row <=8 and new_pos.col <=8:
            return True
        else:
            return False
    def symbol(self):
        return "r"
    def move(self,new_pos):
        new_pos.symbol = self.symbol()
        self.pos = new_pos

class Knight(ChessPiece):
    def __init__(self, color, pos):
        super().__init__(color, pos)
    def canMoveTo(self, new_pos):
        if abs(self.pos.col - new_pos.col) == 1 and abs(self.pos.row - new_pos.row) == 2 and new_pos.row <=8 and new_pos.col <=8:
            return True
        elif abs(self.pos.col - new_pos.col) == 2 and abs(self.pos.row - new_pos.row) == 1 and new_pos.row <=8 and new_pos.col <=8:
            return False
    def symbol(self):
        return "k"
    def move(self,new_pos):
        new_pos.symbol = self.symbol()
        self.pos = new_pos

class Bishop(ChessPiece):
    def __init__(self, color, pos):
        super().__init__(color, pos)
    def canMoveTo(self, new_pos):
        if new_pos.diag(self.pos) and new_pos.row <=8 and new_pos.col <=8:
            return True
        else:
            return False
    def symbol(self):
        return "b"
    def move(self,new_pos):
        new_pos.symbol = self.symbol()
        self.pos = new_pos

class Queen(ChessPiece):
    def __init__(self, color, pos):
        super().__init__(color, pos)
    def canMoveTo(self, new_pos):
        if (new_pos.hor(self.pos) or new_pos.vert(self.pos) or new_pos.diag(self.pos)) and new_pos.row <=8 and new_pos.col <=8:
            return True
        else:
            return False
    def symbol(self):
        return "Q"
    def move(self,new_pos):
        new_pos.symbol = self.symbol()
        self.pos = new_pos
    
class King(ChessPiece):
    def __init__(self, color, pos):
        super().__init__(color, pos)
    def canMoveTo(self, new_pos):
        if abs(self.pos.row - new_pos.row) == 1 and abs(self.pos.col - new_pos.col) == 1 and new_pos.row <=8 and new_pos.col <=8:
            return True
        else:
            return False
    def symbol(self):
        return "K"
    def move(self,new_pos):
        new_pos.symbol = self.symbol()
        self.pos = new_pos