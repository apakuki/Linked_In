// Learning C++ 
// Exercise 03_04
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include "cow.h"

using namespace std;

int a = 37;
int *ptr;
cow *my_cow;

int main(){
    ptr = &a;

    cout << "           The contents of variable a is " << a << endl;
    cout << "           ptr is pointing to address " << ptr << endl;
    cout << "           The address of variable a is " << &a << endl;
    cout << "           Where ptr is pointing we have  " << *ptr << endl;

    my_cow = new cow("Gertrude",3,hide);
    cout << my_cow->get_name() << " is a type-" << (int)my_cow->get_purpose() << " cow." << endl;
    cout << my_cow->get_name() << " is " << my_cow->get_age() << " years old." << endl;

    delete my_cow;
    return (0);
}
