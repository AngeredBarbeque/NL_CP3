#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

/* Covert other data types to strings!
istringstream => reading a string
ostringstream => writing a string
stringstream => both!

*/


using namespace std;

int main(){
    fstream file;
    file.open("file.txt", ios::in | ios::out | ios::app);
    if(file.is_open()){
        double number = 3.14;
        stringstream stream;
        stream << fixed << setprecision(2) << number;
        string str = stream.str();
        cout << str << endl;
        file.close();
    }

    return 0;
}


/*
NL Binary and searching
What is a potential issue with converting values to strings without control?
Adding extra zeroes and static formating.

How can you control the way a value is converted to a string?


Why is it useful to create a reusable function for converting values to strings?


What is parsing in the context of working with strings?


How do you extract specific information from a string in programming?


When a title contains a space, which function should you use to read it properly?


Why might extra zeros be added to a string when converting a value without control?


How does controlling the string conversion process benefit your program?


Give an example scenario where parsing a string would be necessary in a program.


Why are images, audio, and PDFs not readable by humans when stored in files?


What file extensions are commonly used to create binary files?


When writing to a binary file, what does the first parameter (reinterpret_cast<char*>(&numbers)) represent?


Why does the binary file only take 12 bytes while the array of integers might be larger?


How does reading individual numbers from a binary file differ from reading the entire list at once?


What is the main difference between sequential search and binary search?


In which type of data structure is binary search most efficient?


What is a key requirement for binary search to work correctly on a list?


How does sequential search find an item in a list?


Why is binary search generally faster than sequential search for large, sorted lists?


*/