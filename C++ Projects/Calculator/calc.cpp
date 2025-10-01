// NL Calculator

#include <iostream>
#include <string>
using namespace std;

enum Operations{
    Add = 1,
    Subtract = 2,
    Multiply = 3,
    Divide = 4,
    Exit = 5
};
float num;
float num_two;

void add(){
    cout << "Please enter the first number." << endl;
    cin >> num;
    cout << "Please enter the second number." << endl;
    cin >> num_two;
    cout << num << " + " << num_two << " = " << (num + num_two) << endl;
    return;
}

void sub(){
    cout << "Please enter the first number." << endl;
    cin >> num;
    cout << "Please enter the second number." << endl;
    cin >> num_two;
    cout << num << " - " << num_two << " = " << (num - num_two) << endl;
    return;
}

void divide(){
    cout << "Please enter the first number." << endl;
    cin >> num;
    cout << "Please enter the second number." << endl;
    cin >> num_two;
    cout << num << " / " << num_two << " = " << (num / num_two) << endl;
    return;
}

void mult(){
    cout << "Please enter the first number." << endl;
    cin >> num;
    cout << "Please enter the second number." << endl;
    cin >> num_two;
    cout << num << " x " << num_two << " = " << (num * num_two) << endl;
    return;
}

int main(){
    cout << "Hello! Welcome to a really bad and lame calculator!" << endl;
    while (true) {
        int input;
        cout << "1: Add" << endl 
            << "2: Subtract" << endl 
            << "3: Multiply" << endl 
            << "4: Divide" << endl 
            << "5: Exit" << endl;
        cin >> input;
        if (input == Operations::Add) {
            add();
        }else if (input == Operations::Subtract) {
            sub();
        }else if (input == Operations::Multiply) {
            mult();
        }else if (input == Operations::Divide) {
            divide();
        }else if (input == Operations::Exit) {
            cout << "Bye!" << endl;
            return 0;
        }
    }
}
