//NL High score tracker

#include <iostream>
#include <vector>

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