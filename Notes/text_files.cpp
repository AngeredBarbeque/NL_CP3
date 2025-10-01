// NL Text Files

#include <iostream>
#include <limits>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;


struct Movie{
    int id;
    string title;
    int year;
};

int getNum(const string& prompt) {
    int num;
    while(true){
        cout << prompt;
        cin >> num;
    if (cin.fail()){
        cout << "Enter a valid number >:(\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //clears the buffer
    }else break;
    }
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //clears the buffer
    return num;
}


int main(){
   int first = getNum("First:\n");
   int second = getNum("Second:\n");
   cout << first << " " << second << endl;

   ofstream ofile;
   ofile.open("data.txt");
   if(ofile.is_open()){
    ofile << setw(20) << "Hello " << setw(20) << "Clang!\n";
    ofile.close();
   }

    ofile.open("data.csv");
   if(ofile.is_open()){
    ofile << "id,title,year\n" << "1,Terminator 1,1984\n" << "2,Terminator 2,1984\n";
    ofile.close();
   }

    ifstream ifile;

    ifile.open("data.csv");
    vector<Movie> movies;
    string line;
    if (ifile.is_open()) {
        getline(ifile, line);
        while(getline(ifile, line)){
            string str;
            istringstream iss(line);
            Movie movie;
            getline(iss, str, ',');
            movie.id = stoi(str);
            cout << str << endl;

            getline(iss, str, ',');
            movie.title = str;
            cout << str << endl;

            getline(iss, str, ',');
            movie.year = stoi(str);
            cout << str << endl;

            movies.push_back(movie);
        }
    ifile.close();
    for (Movie i : movies) {
        cout << i.title << endl;
    }
   }

   return 0;
}


/*
What are the 3 main sources of data for a program?
terminal - cout, cin (User given)
file - txt, csv, binary
network - internet, other computers


What are streams?
#include <iostream>
includes in stream and out stream

in stream: cin
out stream: cout


What are the different streams we might need to include in a program? 
istream, ostream, ifstream, ofstream, fstream


What is the base class for all streams?
ios


What is buffer?
A temporary container for user inputs


How do you clear the buffer?
cin.ignore();


How do you handle invalid inputs from the terminal
int num;
    while(true){
        cout << prompt;
        cin >> num;
    if (cin.fail()){
        cout << "Enter a valid number >:(\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //clears the buffer
    }else break;
    }
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //clears the buffer
    return num;


What streams are for files specifically
ifstream > input file stream
ofstream < output file stream
fstream >< combines the functionality


How do you write to a text file?
file << "Blahblahblah";


What do stream manipulators let us do?
Let us adjust how we write our information


How do you write to a CSV?
file.open("dava.csv");
if(file.is_open()){
    file << "id, title, year\n" << "1, Terminator 1, 1984\n" << "2, Terminator 1, 1984\n";
    file.close();
}

How do you read a text file?
ifstream ifile;

    ifile.open("data.txt");
    if (ifile.is_open()) {
        string info;
        getline(ifile, info);
        cout << info;
        ifile.close();
    }

How do you read a CSV file?
ifile.open("data.csv");
   if (ifile.is_open()) {
        string str;
        getline(ifile, str, ',');
        cout << str;
        ifile.close();
   }

What is a delimiter?
What you seperate items by.

How do you read an entire CSV?
Repeated getlines

How do you turn items from a CSV into objects of a structure?
ifstream ifile;

    ifile.open("data.csv");
    vector<Movie> movies;
    string line;
    if (ifile.is_open()) {
        getline(ifile, line);
        while(getline(ifile, line)){
            string str;
            istringstream iss(line);
            Movie movie;
            getline(iss, str, ',');
            movie.id = stoi(str);
            cout << str << endl;

            getline(iss, str, ',');
            movie.title = str;
            cout << str << endl;

            getline(iss, str, ',');
            movie.year = stoi(str);
            cout << str << endl;

            movies.push_back(movie);
        }
    ifile.close();
    for (Movie i : movies) {
        cout << i.title << endl;
    }
   }

*/