//
// Created by Will Smith on 2/17/26.
//

#ifndef PERSON2026T_PERSON_H
#define PERSON2026T_PERSON_H
#include <ostream>
#include <string>
using namespace std;


class Person {
    private:
     string name;
     int age;
     bool isValidAge(int age);
     static int population;
    public:
        string getName();
        int getAge();
        void setName(string name);
        void setAge(int age);
        void hasBirthday();
        Person();
        Person(string name, int age);
        static int getPopulation();

     friend std::ostream & operator<<(std::ostream &os, const Person &obj) {
         return os
                << obj.name << " is "
                << obj.age << " years old.";
     }
};


#endif //PERSON2026T_PERSON_H