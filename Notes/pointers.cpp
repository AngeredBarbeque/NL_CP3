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
pointer_1 == pointer_2 Is pointer_1 the same as pointer_2
pointer_1 > pointer_2 Is pointer_1 after pointer_2?
pointer_1 < pointer_2 Is pointer_1 before pointer_2?
pointer_1 != nullptr  Is pointer_1 pointing to anything?


                      What is dynamic memory allocation?
Allocating a set amount of space for a variable, but adding more space when necessary.


                               What is the Stack?
An area of memory used for managing function calls, local variables, and control flow.
It is managed by the compiler for quick allocation of memory.


                                What is the Heap?
An area of memory used for dynamic memory. Stores data if the size is unknown at the time of compiling.
Memory must be manually managed by the program. 
Used for flexible long-lived storage of complex data structures, objects, and large files.


                            What are smart pointers?
Pointers that work like varaibles on the stack instead of in the heap.
Type 1: Unique Pointer
Owns that part of the memory, nothing else can use it.
Type 2: Shared Pointer
Allows multiple pointers to point at the same thing

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
    // Comparing Pointers
    cout << (pnum < pday) << endl;
    if (pnum != nullptr) {
        cout << *pnum << endl;
        pnum++;
    }
    cout << *pnum << endl;


    // Dynamic Memory Allocation
    int capacity = 5;
    int* sanity = new int[capacity];
    int entries = 0;

    while (true){
        cout << "Please provide a number:";
        cin >> sanity[entries];
        if (cin.fail()) 
            break;
        entries++;
        if (entries == capacity) {
            capacity += 5;
            int* temp = new int[capacity];
            for (int i = 0; i < entries; i++)
                temp[i] = sanity[i];
            delete[] sanity;
            sanity = temp;
        }
    }
    for (int i = 0; i < entries; i++) {
        cout << sanity[i] << endl;
    }
    delete[] sanity;

    return 0;
}