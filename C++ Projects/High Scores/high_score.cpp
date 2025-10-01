//NL High score tracker

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <iomanip>
#include <limits>

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

void writeScore(Highscore score) {
    ofstream ofile;
    ofile.open("data.csv");
    if(ofile.is_open()){
        ofile << "name,score,date\n" << score.username << ',' << score.score << ',' << score.date.day << '/' << score.date.month << '/' << score.date.year;
        ofile.close();
    }
};

vector<Highscore> readScore() {
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

            getline(iss, str, ',');
            //CREATE THIS

            scores.push_back(score);
        }
    ifile.close();
    for (Highscore i : score) {
        cout << i.username << " : " << i.score << " : " << //Make dates printable
    }
   }

   return 0;
}