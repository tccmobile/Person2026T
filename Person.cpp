//
// Created by Will Smith on 2/17/26.
//

#include "Person.h"

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
}

Person::Person(string name, int age) {
    this->name = name;
    this->age = age;
    population++;
}

int Person::getPopulation() {
    return population;
}
