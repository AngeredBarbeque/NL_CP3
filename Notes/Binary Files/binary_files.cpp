#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <sstream>

/* Covert other data types to strings!
istringstream => reading a string
ostringstream => writing a string
stringstream => both!

*/


using namespace std;

struct Movie{ 
    string title;
    int year;
};



string toString(double number, int precision){
    stringstream stream;
    stream << fixed << setprecision(precision) << number;
    return stream.str();
}

Movie parseMovie(string parsed){
    //Prepares string to be split
    stringstream stream;
    stream.str(parsed);

    Movie movie;
    //Takes first part of string before the comma, and assigns it to movie.title
    getline(stream, movie.title, ',');
    //Takes remaining string and assigns it to movie.year
    stream >> movie.year;
    return movie;
}

int main(){
    double number = 3.14;
    cout << toString(number, 2) << endl;

    //parsing
    string users = "10 20";
    stringstream fix;
    fix.str(users);
    int first;
    fix >> first;

    int second;
    fix >> second;

    cout << "First: " << first << endl << "Second: " << second << endl;

    auto movie = parseMovie("A New Hope,1977");
    cout << movie.title << endl << movie.year << endl;

    fstream file;
    file.open("file.txt", ios::in | ios::out | ios::app);
    if(file.is_open()){
        file.close();
    }

    return 0;
}


/*
NL Binary and searching
What is a potential issue with converting values to strings without control?
Adding extra zeroes and static formating.

How can you control the way a value is converted to a string?
Using stringstream

Why is it useful to create a reusable function for converting values to strings?
So you don't have to write it over and over

What is parsing in the context of working with strings?
Extracting a piece of information from a string

How do you extract specific information from a string in programming?
Parsing
string users = "10 20";
stringstream fix;
fix.str(users);
int first;
fix >> first;
int second;
fix >> second;
cout << "First: " << first << endl << "Second: " << second << endl;

When a title contains a space, which function should you use to read it properly?
getline

Why might extra zeros be added to a string when converting a value without control?


How does controlling the string conversion process benefit your program?


Give an example scenario where parsing a string would be necessary in a program.


When writing to a binary file, what does the first parameter (reinterpret_cast<char*>(&numbers)) represent?


Why does the binary file only take 12 bytes while the array of integers might be larger?


What is the main difference between sequential search and binary search?


In which type of data structure is binary search most efficient?


What is a key requirement for binary search to work correctly on a list?


How does sequential search find an item in a list?


Why is binary search generally faster than sequential search for large, sorted lists?


*/