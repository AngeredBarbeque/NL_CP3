//NL High score tracker

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <iomanip>
#include <limits>
#include <algorithm>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct Highscore {
    string username;
    int score;
    Date date;
};

ostream& operator << (ostream& stream, Date& date){
    stream << date.day << '/' << date.month << '/' << date.year;
    return stream;
}

void writeScore(Highscore& score) {
    ofstream file;
    file.open("scores.csv");
    if(file.is_open()){
        file << "name,score,date\n" << score.username << ',' << score.score << ',' << score.date.day << '/' << score.date.month << '/' << score.date.year;
        file.close();
    }
};

bool sortScores(Highscore a, Highscore b) {
    return a.score > b.score;
};


Highscore getScore() {
    Highscore score;
    while (true) {
        cout << "Please enter your username!\n";
        cin >> score.username;
        if (cin.fail()) {
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        cout << "Please enter your score!\n";
        cin >> score.score;
        if (cin.fail()) {
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        cout << "Please enter your day as a number!\n";
        cin >> score.date.day;
        if (cin.fail() || score.date.day > 31) {
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        cout << "Please enter your month as a number!\n";
        cin >> score.date.month;
        if (cin.fail() || score.date.month > 12) {
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        cout << "Please enter your year as a number!\n";
        cin >> score.date.year;
        if (cin.fail()) {
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        return score;
    }
}

vector<Highscore> readScores() {
    ifstream ifile;
    ifile.open("scores.csv");
    vector<Highscore> scores;
    string line;
    if (ifile.is_open()) {
        getline(ifile, line);
        while(getline(ifile, line)){
            string str;
            istringstream iss(line);
            Highscore score;
            getline(iss, str, ',');
            score.username = str;

            getline(iss, str, ',');
            score.score = stoi(str);

            getline(iss, str, '/');
            score.date.day = stoi(str);
            getline(iss, str, '/');
            score.date.month = stoi(str);
            getline(iss, str);
            score.date.year = stoi(str);

            scores.push_back(score);
        }
    ifile.close();
    }
    return scores;
}

int main() {
    vector<Highscore> scores = readScores();
    sort(scores.begin(), scores.end(), sortScores);
    cout << "Welcome to your high score tracker!\n";
    while (true) {
        scores = readScores();
        string input;
        cout << "What would you like to do?\n1: View Previous Highscores\n2: Add Highscore\n3: Leave\n";
        cin >> input;
        if (input == "1") {
            scores = readScores();
            cout << "Username | Score | Date" << endl;
            for (Highscore i : scores) {
                cout << i.username << " : " << i.score << " : " << i.date << endl;
            }
        }else if (input == "2") {
            Highscore score = getScore();
            writeScore(score);
            //A built in function that sorts
            //In this case, it goes through the vector "scores", and sorts starting with the first and ending at the final
            sort(scores.begin(), scores.end(), sortScores);
        }else if (input == "3") {
            cout << "Bye!";
            return 0;
        }else {
            cout << "Enter a valid number.";
            continue;
        }

    }
}