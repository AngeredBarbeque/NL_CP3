// NL Variables, Data Types, Inputs and Outputs
// Trust in Clang, always

#include <iostream>
using namespace std;

int main(){
    int students = 11;
    short days = 5;
    long years = 2025l;
    const float pi = 3.1415926535f;
    bool on = true;
    char name = 'C';
    cout << "Number of students: " << students << endl;
    cout << "Tell me your age: ";
    int age;
    cin >> age;
    cout << "You are "<< age << ", you loser."<< endl;
    return 0;
}

//                          Data Types:
//  Short, 2bytes, -32,678 to 32,678
//  Int, 4bytes, -2 billion to 2 billion
//  Long 4bytes, -2 billion to 2 billion, compiles to an integer unless you but an 'l' at the end.
//  Long Long, 8 bytes, Really big numbers
//  Floats, 4bytes, 3.4E38, compiles to a double unless you put an 'f' at the end.
//  Doubles, 8bytes, 1.7E308
//  Long doubles, 8bytes, 3.4E932
//  Booleans, 1byte, True or False
//  char, 1byte, single letter

//                          How are static and dynamically typed variables different?
//  A static variable has a set type, dynamic variables don't.

//                          REMINDER: What is the difference between instantiating and declaring a variable?
//  Instantiating is giving a variable a value, declaring is just saying that the variable exists.
//  Variables should be instantiated and declared on the same line, but only one variable per line.

//                          What case type should be used for c++ variables?
//  Snake Case

//                          What is the C++ standard library?
//  A bunch of stuff that makes c++ easier to work with.

//                          How do you access the standard library?
//  Use #Include specfic library

//                          How do you create an output in C++?
// Use cout from std.

//                          How do you create an input in C++?
// Use cin from std.

//                          What is the stream in C++?
//  The direction that information flows.

//                          What is a constant?
//  A variable that cannot change.

//                          Why do we write constants?
//  To keep your variables safe in case you try to change it.

//                          When dividing two integers:
// Use "/" to get an integer answer. (Truncated not rounded)
// Use "//" to get an answer with decimals.
