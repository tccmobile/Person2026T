#include "Person.h"
#include <iostream>
using namespace std;


void getOld(Person oldPerson) {
    for (int i = 0; i < 10; ++i) {
        oldPerson.hasBirthday();
    }
    cout << oldPerson << endl;
}
int main() {
    Person one; // default constructor
    Person two("Tom Jones", 23);
    Person three("Mary Todd", 73,"Happy");
    Person four("Abraham", 75,"tall");
    four = three;
    Person* personPtr = new Person();
    Person* personPtr2 = new Person("Kim Turner",56);
    Person* personPtr3 = new Person("Fred Thomas", 37,"Grumpy");

    personPtr->setName("Tommy Jones");
    cout << *personPtr << endl;

    personPtr3 -> hasBirthday();
    cout << *personPtr3 << endl;

    personPtr -> setNickName("Wimpy");
    cout << *personPtr << endl;

    cout<<one<<endl;
    getOld(one);
    cout << one << endl;


    cout<<"Assignment overload: "<<endl;
    cout<<three<<endl;
    cout<<four<<endl;

    four.setNickName("Shorty");
    cout<<three<<endl;
    cout<<four<<endl;


    delete personPtr;
    delete personPtr2;
    delete personPtr3;
    







}