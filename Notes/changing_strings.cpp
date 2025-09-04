// NL

//How do I get a substring from within a string?
// substr(starting_index, ending_index)

//How do I create an escape character in C++
// Using a \ in a string

//How do I convert a string to another data type?
// Using std::sto(first letter of type)
// Or, to make a string out of another data type, use std::to_string()

//What is a raw string and when would I use it?
// A captial R before a string, then paranthesis around what you want printed directly.

#include <iostream>
#include <string>
using namespace std;

string name = "clang 64";
string sentence = "Jovial zebras quickly vexed my big friend chuck.";

int main(){
    auto index = name.find(' ');
    string first_name = name.substr(0,index);
    string last_name = name.substr(index + 1);
    first_name[0] = (first_name[0]);
    cout << first_name << endl << last_name;
    int length = size(sentence);
    for (int i=0; i< length; i++) {
        if (isspace(sentence[i])) {
            sentence[i] = '|';

        }else if(isupper(sentence[i])) {
            sentence[i] = '#';
        }else {
            sentence[i] = char(int(sentence[i]) + 4 % 26 + 96);
        }
    }
    cout << sentence << endl;
    cout << "This is a \"question\" ... Maybe.";
    return 0;
}
