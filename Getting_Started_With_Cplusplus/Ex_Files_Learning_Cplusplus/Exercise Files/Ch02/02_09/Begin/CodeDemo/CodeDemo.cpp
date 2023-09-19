// Learning C++ 
// Exercise 02_09
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

using namespace std;

float       flt = -7.44f;
int32_t     sgn;
uint32_t    unsgn;

int main(){
    sgn = flt;
    unsgn = sgn;

    cout << "float: " << flt << endl;
    cout << "int32: " << sgn << endl;
    cout << "uint32: " << unsgn << endl;

    cout << endl;
    
    
    int fahrenheit = 100;
    int celcius;

    celcius = (((float)(5.0F))/9) * (fahrenheit - 32);

    cout << "fahrenheit: " << fahrenheit << endl;
    cout << "celcius: " << celcius << endl;

    return (0);
}
