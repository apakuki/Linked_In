// Learning C++ 
// Exercise 03_02
// Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>

using namespace std;

enum cow_purpose {dairy, meat, hide, pet};

class cow{

public:
    cow(string name_i, int age_i, unsigned char purpose_i){
        name = name_i;
        age = age_i;
        purpose = purpose_i;
    }

    string get_name(){
        return name;
    }

    int get_age(){
        return age;
    }

    unsigned char get_purpose(){
        return purpose;
    }

    void set_age(int new_age){
        age = new_age;
    }

    void set_name(string new_name){
        name = new_name;
    }

    void set_purpose(unsigned char new_purpose){
        purpose = new_purpose;
    }

private:    
    string name;
    int age;
    unsigned char purpose;
};

int main(){
    cow my_cow("Hilder", 7, pet);

// *Data from cow was a struct
//    my_cow.age = 5;
//    my_cow.name = "Betsy";
//    my_cow.purpose = dairy;

    cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << endl;
    cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << endl;

    cow my_second_cow("Non_name", 1, dairy);
    cout << endl;
    cout << endl;
    
    cout << "I just bought a second cow at the market, I will name her Daisy, she is two and will give me milk " << endl;

    my_second_cow.set_age(2);
    my_second_cow.set_name("Daisy");
    my_second_cow.set_purpose(dairy);

    cout << my_second_cow.get_name() << " My second cow is a type-" << (int)my_second_cow.get_purpose() << " cow." << endl;
    cout << my_second_cow.get_name() << " is " << my_second_cow.get_age() << " years old." << endl;


    return (0);
}
