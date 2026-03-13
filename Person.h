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
    char* nickName;
    bool isValidAge(int age);
    static int population;
public:
    string getName();
    int getAge();
    void setName(string name);
    void setAge(int age);
    const char* getNickName() const;
    void setNickName(const char* alias);
    void hasBirthday();
    Person();
    Person(string name, int age);
    Person(string name, int age, const char* alias);
    Person(const Person& person);
    ~Person();
    static int getPopulation();
    Person& operator=(const Person& person);

    friend ostream& operator<<(ostream& os, const Person& obj) {
        return os
               << obj.name << " is "
               << obj.age << " years old. Their nickname is " << obj.nickName;
    }
};

#endif //PERSON2026T_PERSON_H
