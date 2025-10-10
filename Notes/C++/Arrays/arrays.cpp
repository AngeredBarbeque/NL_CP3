// NL Arrays


//                  How are for loops constructed in C++
//  for (int i=0; i < size; i++)


//             When do you need to use curly brackets in C++
//  When the function/loop/etc is more than one line


//                  How do you compare items in arrays
//  for (int i=0; i < size(fam);i++) {
//      cout << fam[i] << " Larsen\n";
//      if (fam[i] == sibs[i-2])
//          cout << "They are a sibling!\n";
//  }


//         How do you use an array as an argument in a function
//  function(string list[])


//                           What is type_t
//  A data type used to represent the size of something
//  A placeholder used to know how much space we have or when we dont know how much space we have


//                       Why would we use type_t
//  To know how much space we have or when we dont know how much space we have


//                     How do you search an array
//int search(string list[], int len, string item){
//  for(int i=0; i < len; i++){
//      if (list[i] == item){
//          cout << "You are a sibling!\n";
//          return 1;
//      }
//  }
//  cout << "You are a parent!\n";
//  return 0;


//                      How do you sort an array
//  methods like bubble sorting, which in particular compares two numbers of an array and switches them if the first number is bigger.

//              How do you make a multi-dimensional array
//  int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};


#include <iostream>
#include <limits>
using namespace std;

string fam[6] = {"Timothy","Sandra","Zachary","Nicholas","Samuel","Bethany"};
string sibs[4] = {"Zachary","Nicholas","Samuel","Bethany"};

int search(string list[], size_t len, string item){
    for(int i=0; i < len; i++){
        if (list[i] == item){
            cout << "You are a sibling!\n";
            return 1;
        }
    }
    cout << "You are a parent!\n";
    return 0;
    
};

int main(){
    for (int i=0; i < size(fam);i++) {
        cout << fam[i] << " Larsen\n";
        search(sibs, size(sibs), fam[i]);  
    }


    //  SIZE OF T
    cout << numeric_limits <long long>::min() << endl;
    cout << numeric_limits <long long>::max() << endl;
    cout << numeric_limits <size_t>::min() << endl;
    cout << numeric_limits <size_t>::max() << endl;


    //Structured Binding
    auto [d,w,h,v,d,l] = fam;
    cout << d << endl;

    //Multidimensional arrays
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    return 0;
}