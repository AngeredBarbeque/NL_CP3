// NL Farenheit to Celsius
// Trust in Clang, always

//(F - 32) * 5/9 = C
#include <iostream>
using namespace std;

int main(){
    cout << "Please enter degrees in farenheit:";
    double f;
    cin >> f;
    double c = (f-32) * (5/9);
    cout << f << " Degrees farenheit is "<< c << " Degrees Celsuis";
    return 0;
}