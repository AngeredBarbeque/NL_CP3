/*
NL Pointers notes
                                What is a pointer?
Something that holds an adress rather than information.


                             Why do we use pointers?
They're more efficient for large numbers.
Dynamic variables
Polymorphism


                            How do I create a pointer
data_type* pvariable_name = &variable_name;


                      What is indirection or de-referencing?
Using a *pointer_variable to make the pointer say what's in the location instead of just where the location is.


                 What is a constant variable? (Extra Question)
A variable that can't be changed.


          What are constant pointers? How are the different types used?

 Constant data, non constant pointer
    const double* ppi = &pi;
    ppi = &gpa;
Value at the location cannot be changed, but location being pointed at can.

Constant pointer, non constant data 
    int* const pday = &day;
    *pday = 6;
Value at location can be changed, but location cannot.

Constant pointer, Constant data
    const int* const pmonth = &month;
Location, and value at location cannot be changed.


                    How do you pass a pointer into a function?
function(data_type* var_name)


                   Why would you pass a pointer to a function?
To avoid giving the function an uneccessary amount of information.


                          How do you compare pointers?



                      What is dynamic memory allocation?



                               What is the Stack?



                                What is the Heap?



                            What are smart pointers?



*/

#include <iostream>
using namespace std;

int numbers[] = {4, 2, 6, 8, 14, 24, 65};

void divide(int* list, int size) {
    for(int i; i <size; i++) {
        list[i] = list[i]/2;
        cout << list[i] << endl;
    }
    cout << "This is my numbers list :) " << *list << endl;
}

int main() {
    int num = 4;
    int* pnum = &num;
    int day = 5;
    int month = 9;

    const double pi = 3.14159265351979;
    const double gpa = 1.56;
    *pnum = 8;

    // Constant pointers

    // Constant data, non constant pointer
    const double* ppi = &pi;
    ppi = &gpa;
    //Value at the location cannot be changed, but location being pointed at can.

    // Constant pointer, non constant data 
    int* const pday = &day;
    *pday = 6;
    // Value at location can be changed, but location cannot.

    // Constant pointer, Constant data
    const int* const pmonth = &month;
    // Location, and value at location cannot be changed.

    cout << "The number is " << num << endl;
    cout << "The location of the number is " << pnum << endl;

    divide(numbers, size(numbers));

    return 0;
}