// Learning C++ 
// Exercise 04_01
// If Statements, by Eduardo Corpeño 

#include <iostream>

using namespace std;

int a = 1023;
bool flag = false;
char letter = 'd';

int main(){

    if (a > 1000)
        cout << "Warning: a is over 1000." << endl;

    if (a % 2)
        cout << "a is odd" << endl;
    else
        cout << "a is even" << endl;

    return (0);
}
