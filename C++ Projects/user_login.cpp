// NL User login

#include <iostream>
using namespace std;

int main() {
    // Defines a name variable
    string name;
    // Defines arrays of users
    string admins[2] = {"Clang","Darius"};
    string users[5] = {"Luke","Dave#27","Alex","Dandy","Gerald"};
    cout << endl << "Please enter your name:" << endl;
    //Recieves a name input
    cin >> name;
    //Checks if you're an admin
    if (name == admins[0]) {
        cout << "Welcome back, Admin " << name << '!';
    }
    else if (name == admins[1]) {
        cout << "Welcome back, Admin " << name << '!';
    }
    //Checks if you're a verified user
    else if (name == users[0]) {
        cout << "Welcome back, " << name << '!';
    }
    else if (name == users[1]) {
        cout << "Welcome back, " << name << '!';
    }
    else if (name == users[2]) {
        cout << "Welcome back, " << name << '!';
    }
    else if (name == users[3]) {
        cout << "Welcome back, " << name << '!';
    }
    else if (name == users[4]) {
        cout << "Welcome back, " << name << '!';
    //Prints if you aren't a user or admin.
    } else {
        cout << "Welcome, " << name << '.';
    };
    return 0;
}