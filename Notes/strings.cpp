// NL Strings, Arrays, and Conditionals

//  Use appostrophes like commas. Ex: 1'208'674'421

//        vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv
//      > Strings are lists of characters! <
//        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^


//                          What is Narrowing?
//  Taking a variable, and transitioning it's contents into a smaller amount of space.

//        What is a basic way to generate random numbers in C++?
//  int seconds = time(nullptr);
//  srand(seconds);
//  int my_num = rand();
//  cout << my_num;
//  return 0;

//                          What is an array?
// A list, it can only take one data type at a time.

//                      How do I create an array?
// type var_name[amount of items] = {item_one,item_two,etc}

//                    How do you make strings in C?
//  char var_name[amount of chars +1] = "String"

//                How did C++ improve creating strings? 
//  It has a prebuilt String class.
//  string sentence = "Trust in Clang";
//  cout << sentence;

//                     How do I search a string?
//  .starts_with() returns true or false
//  .ends_with() returns true or false
//  .empty() returns true or false
//  .front() returns first character
//  .back() returns last character
//  .find() finds the index of the first part of the first occurance
//  .rfind() finds the index of the last part of the last occurance
//  find_first_of()
//  find_last_of()
//  find_first_not_of()
//  find_last_not_of()
//  substr(starting_idx, spaces to move)

//                     How do I modify a string?
//  .append()
//  .insert(index, new_str)
//  .clear()
//  .erase()
//  .replace(index, replacement_str)

//                   What are some string methods? 
//  .append()
//  .insert(index, new_str)
//  .clear()
//  .erase()
//  .replace(index, replacement_str)
//  .starts_with() returns true or false
//  .ends_with() returns true or false
//  .empty() returns true or false
//  .front() returns first character
//  .back() returns last character
//  .find() finds the index of the first part of the first occurance
//  .rfind() finds the index of the last part of the last occurance
//  find_first_of()
//  find_last_of()
//  find_first_not_of()
//  find_last_not_of()
//  substr(starting_idx, spaces to move)

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int seconds = time(nullptr);
    srand(seconds);
    int my_num = rand();
    cout << my_num << endl;
    int grades[11] = {99,24,48,64,48,84,77,85,69,98,78};
    cout << grades[2] << endl;

    string name = "Nick";
    string sentence = "Trust in Clang";
    cout << sentence << endl;
    cout << sentence.length() << endl;
    cout << (name > sentence) << endl; 
    sentence.append("!");
    sentence.insert(5, " always ");
    sentence.clear();
    sentence.erase();
    int first = name.find("Nick");
    int end = first + 4;
    name.replace(first, end, "Nicholas");
    cout << name << endl; 
    cout << sentence << endl;
    cout << name.substr(0,2) << endl;
    return 0;
}