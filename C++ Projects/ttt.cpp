#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string board[3][3] = {
    {" "," "," "}, 
    {" "," "," "}, 
    {" "," "," "}};
int len = size(board);

//Displays the board in a nice way
void print_board()
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < size(board[i]); j++)
        {
            cout << board[i][j];
            if (j != 2)
            {
                cout << "|";
            }
        }
        cout << endl;
        if (i != 2)
        {
            cout << "-----" << endl;
        }
    }
}

//Tries to add your desired letter to the desired location
bool turn(int row, int column, string letter) {
    if (board[row-1][column-1] == " ") {
        board[row-1][column-1] = letter;
        return true;
    }
    return false;
}

//Checks if there are three letters in a row
bool three_in_a_row(string letter) {
    bool all_same = true;

    for (int i = 0; i < len; i++) {
            all_same = true;
        for (int j = 0; j < size(board[i]); j++) {
            if (board[i][j] != letter) {
                all_same = false;
            }
        if (all_same) {
            return true;
        }
        }
    }

    for (int i = 0; i < 3; i++) {
        all_same = true;
        for (int j = 0; j < size(board); j++) {
            if (board[j][i] != letter) {
                all_same = false;
            }
        }
        if (all_same) {
            return true;
        }
    }

    all_same = true;
    for (int i = 0; i < 3; i++) {
        if (board[i][i] != letter) {
            all_same = false;
        }
    }
    if (all_same) {
        return true;
    }

    all_same = true;
    for (int i = 0; i < 3; i++) {
        if (board[i][i-2] != letter) {
            all_same = false;
        }
    }
    if (all_same) {
        return true;
    }
    return false;

}

void end_game() {
    if (three_in_a_row("X")) {
        cout << "X Wins!\n";
        print_board();
        exit(0);
    }
    if (three_in_a_row("O")) {
        cout << "O Wins!\n";
        print_board();
        exit(0);
    }
    bool full = true;
    for (int i = 0; i < size(board); i++) {
        for (int j = 0; j < size(board[i]); j++) {
            if (board[i][j] == " ") {
                full = false;
            }
        }
    }
    if (full) {
        cout << "Cat Wins :(\n";
        print_board();
        exit(0);
    }
}

int main() {
    srand(time(nullptr));
    cout << "Hello! Welcome to tic-tac-toe! You will play as X.\n";
    print_board();
    while (true) {
        int play_row;
        cout << "Which row would you like to play in?\n";
        cin >> play_row;
        int play_col;
        cout << "Which column would you like to play in?\n";
        cin >> play_col;
        if (!turn(play_row, play_col, "X")) {
            cout << "That spot is taken, please try again!\n";
            continue;
        }
        end_game();
        while (true) {
            int com_row = (rand() * 6) % 3;
            int com_col = (rand() * 45) % 3;
            if (turn(com_row, com_col, "O")) {
                end_game();
                break;
            }
            else {
                continue;
            }
        }
        print_board();
    }
    return 0;
}