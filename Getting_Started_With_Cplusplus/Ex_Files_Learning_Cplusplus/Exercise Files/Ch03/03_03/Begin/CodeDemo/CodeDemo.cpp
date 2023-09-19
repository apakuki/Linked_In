// Learning C++ 
// Exercise 03_03
// Header and Implementation Files, by Eduardo Corpeño 

#include <iostream>
#include "cow.h"

using namespace std;


int main(){
    cow my_cow("Hildy",7,pet);
    cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << endl;
    cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << endl;
    return (0);
}


//  sudo rm -rf /Library/Developer/CommandLineTools
//  sudo xcode-select --install

/*
**ERRORS Compiling:

Undefined symbols for architecture x86_64:
  "__ZN3cow11get_purposeEv", referenced from:
      _main in ccRuQSnb.o
  "__ZN3cow7get_ageEv", referenced from:
      _main in ccRuQSnb.o
  "__ZN3cow8get_nameB5cxx11Ev", referenced from:
      _main in ccRuQSnb.o
  "__ZN3cowC1ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEih", referenced from:
      _main in ccRuQSnb.o
ld: symbol(s) not found for architecture x86_64
collect2: error: ld returned 1 exit status

*/