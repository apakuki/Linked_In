// Learning C++ 
// Exercise 02_08
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring>


using namespace std;

const   int LENGTH1 = 25;
char    array_str1[LENGTH1] = "Hey guys! ";
char    array_str2[] = "Whats up!";

string  std_str1 = "Hi everybody! ";
string  std_str2 = "How's it going?! ";


int main(){

    strcat (&array_str1[0], &array_str2[0]);
    cout << array_str1 << endl;
    cout << std_str1 + std_str2 << endl;



    return (0);
}
