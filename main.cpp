#include "Person.h"
#include <iostream>
using namespace std;


int main() {
    cout<<"Number of persons: "<<Person::getPopulation()<<endl;
    Person one; // default constructor
    cout<<"Number of persons: "<<Person::getPopulation()<<endl;
    Person two("Tom Jones", 23);
    cout<<"Number of persons: "<<Person::getPopulation()<<endl;

    cout<<one.getName()<<" is "<<one.getAge()<<" years old."<<endl;
    cout<<two.getName()<<" is "<<two.getAge()<<" years old."<<endl;

    one.setName("Sue Cook");
    one.setAge(-65);
    cout<<"\nTesting setters:"<<endl;
    cout<<one.getName()<<" is "<<one.getAge()<<" years old."<<endl;

    cout<<"\nTesting mutators:"<<endl;
    two.hasBirthday();
    cout<<two.getName()<<" is "<<two.getAge()<<" years old."<<endl;

    cout<<"\nTesting overloaded <<"<<endl;
    cout<<one<<endl;
    cout<<two<<endl;





}