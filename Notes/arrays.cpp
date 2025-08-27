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


//         How do you use an array as an argument in a function
//


//                           What is type_t
//


//                       Why would we use type_t
//


//                     How do you search an array
//


//                      How do you sort an array
//

//              How do you make a multi-dimensional array
//


#include <iostream>
using namespace std;

string fam[6] = {"Timothy","Sandra","Zachary","Nicholas","Samuel","Bethany"};
string sibs[4] = {"Zachary","Nicholas","Samuel","Bethany"};

void search(string list, string item){
    cout << list << endl;
};

int main(){
    for (int i=0; i < size(fam);i++) {
        cout << fam[i] << " Larsen\n";
        if (fam[i] == sibs[i-2])
            cout << "They are a sibling!\n";
        
    }
}