// NL Dynamic Arrays

//Includes needed things
#include <iostream>
#include <memory>
using namespace std;


//Creates a variable that tracks the current capacity of the array
int capacity = 1;
//Makes a unique pointer called colors pointing to a new string
shared_ptr <string[]> colors(new string[capacity]);
//Tracks the current amounts of entries
int entries = 0;

//Function that asks user for colors, and prints out list
void ask() {
    while (true) {
        //Gets a user input
        cout << "Color:";
        getline(cin, colors[entries]);
        if (colors[entries] == "0")
            break;
        entries++;
        //Expands capacity if necessary
        if (entries == capacity) {
            capacity++;
            shared_ptr <string[]> temp(new string[capacity]);
            for (int i =0; i < entries; i++)
            temp[i] = colors[i];
            colors = temp;
        }
    }
    for (int i = 0; i < entries; i++)
        cout << colors[i] << endl;
}


// Main function
int main() {
    while (true) {
    cout << "You will be asked to enter as many colors as possible. When you cannot list any more colors, please enter \"0\"" << endl;
    cout << "Would you like to continue? y/n:";
    string confirm;
    cin >> confirm;
    cin.ignore();
    if (confirm == "n") {
        cout << "Goodbye!";
        exit(0);
    }
    ask();
    return 0;
};
};