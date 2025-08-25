// NL Strings, Arrays, and Conditionals

//  Use appostrophes like commas. Ex: 1'208'674'421

//                          What is Narrowing?
//  Taking a variable, and transitioning it's contents into a smaller amount of space.

//        What is a basic way to generate random numbers in C++?
//  int seconds = time(nullptr);
//  srand(seconds);
//  int my_num = rand() % 11;
//  cout << my_num;
//  return 0;

//                          What is an array?
//

//                      How do I create an array?
//

//                    How do you make strings in C?
//

//                How did C++ improve creating strings? 
//

//                     How do I search a string?
//

//                     How do I modify a string?
//

//                   What are some string methods? 
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int seconds = time(nullptr);
    srand(seconds);
    int my_num = rand() % 11;
    cout << my_num;
    return 0;
}