// NL Dynamic Arrays

#include <iostream>
#include <memory>
using namespace std;

int main() {
    while (true) {
    cout << "You will be asked to enter as many colors as possible. When you cannot list any more colors, please enter \"0\"" << endl;
    cout << "Would you like to continue? y/n:";
    string confirm;
    cin >> confirm;
    if (confirm == "n") {
        cout << "Goodbye!";
        exit(0);
    }
    //Creates a variable that tracks the current capacity of the array
    int capacity = 1;
    //Makes a unique pointer called colors pointing to a new string
    shared_ptr <string[]> colors(new string[capacity]);
    //Tracks the current amounts of entries
    int entries = 0;

    while (true) {
        string input;
        cout << "Color:";
        cin >> colors[entries];
        getline(cin, input);
        if (colors[entries] == "0")
            break;
        entries++;
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
};
