//
// Created by Will Smith on 2/17/26.
//

#include "Person.h"

#include <iostream>

int Person::population = 0;

bool Person::isValidAge(int age) {
    if (age >=0)
        return true;
    else
        return false;
}

string Person::getName() {
    return name;
}

int Person::getAge() {
    return age;
}

void Person::setName(string name) {
    this->name = name;
}

void Person::setAge(int age) {
    if (isValidAge(age))
        this->age = age;
}

void Person::hasBirthday() {
    age++;
}

Person::Person() {
    name = "John Doe";
    age = 42;
    population++;
    nickName = new char[strlen("Buddy")];
    strcpy(nickName, "Buddy");
}

Person::Person(string name, int age) {
    this->name = name;
    this->age = age;
    population++;
    nickName = new char[strlen("Buddy")];
    strcpy(nickName, "Buddy");
}

Person::Person(string name, int age, char *alias) {
    this->name = name;
    this->age = age;
    population++;
    nickName = new char[strlen(alias)];
    strcpy(nickName, alias);
}

Person::Person(const Person &person) {
    this->name = person.name;
    this->age = person.age;
    population++;
    nickName = new char[strlen(person.nickName)];
    strcpy(nickName, person.nickName);
}

Person::~Person() {
    cout<<"Destroying Person: "<<name<<endl;
    delete nickName;
}

int Person::getPopulation() {
    return population;
}

char* Person::getNickName() {
    return nickName;
}

void Person::setNickName(char* alias) {
    nickName = new char[strlen(alias)];
    strcpy(nickName, alias);
}

Person& Person::operator=(const Person &person) {
    if (this != &person) {
        this->name = person.name;
        this->age = person.age;
        //population = person.population;
        delete nickName;
        nickName = new char[strlen(person.nickName)];
        strcpy(nickName, person.nickName);
    }
}