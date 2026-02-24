# Person2026T

A C++ project demonstrating object-oriented programming concepts with a `Person` class implementation.

## Overview

This repository contains a simple C++ application that implements a `Person` class to demonstrate fundamental OOP concepts including:
- Encapsulation with private member variables
- Getters and setters (accessors and mutators)
- Constructors (default, parameterized, and copy)
- Destructor and dynamic memory management
- Static class members
- Input validation
- Operator overloading (stream insertion and assignment)

## Files

### Person.h
The header file that defines the `Person` class interface.

**Key Components:**
- **Private Members:**
  - `string name` - Stores the person's name
  - `int age` - Stores the person's age
  - `char* nickName` - Dynamically allocated C-string storing the person's nickname
  - `bool isValidAge(int age)` - Private helper method to validate age values
  - `static int population` - Static member tracking total Person objects created

- **Public Methods:**
  - `string getName()` - Returns the person's name
  - `int getAge()` - Returns the person's age
  - `char* getNickName()` - Returns the person's nickname
  - `void setName(string name)` - Sets the person's name
  - `void setAge(int age)` - Sets the person's age with validation
  - `void setNickName(char* alias)` - Sets the person's nickname
  - `void hasBirthday()` - Increments the person's age by 1
  - `Person()` - Default constructor (sets name to "John Doe", age to 42, nickname to "Buddy")
  - `Person(string name, int age)` - Parameterized constructor (nickname defaults to "Buddy")
  - `Person(string name, int age, char* alias)` - Parameterized constructor with nickname
  - `Person(const Person& person)` - Copy constructor (performs deep copy of nickname)
  - `~Person()` - Destructor (frees dynamically allocated nickname memory)
  - `static int getPopulation()` - Returns the total count of Person objects created

- **Operator Overloading:**
  - `Person& operator=(const Person& person)` - Assignment operator (performs deep copy)
  - Friend function overloading the `<<` operator for easy output formatting
  - Formats output as: "[name] is [age] years old. Their nickname is [nickname]."

### Person.cpp
The implementation file containing the method definitions for the `Person` class.

**Key Features:**
- Initializes the static `population` variable to 0
- Implements age validation in `isValidAge()` (checks if age >= 0)
- All constructors increment the `population` counter
- Default and 2-parameter constructors initialize nickname to "Buddy"
- 3-parameter constructor accepts a custom nickname
- Copy constructor performs a deep copy of the dynamically allocated nickname
- Destructor frees the nickname with `delete` and prints a message
- `setAge()` uses validation to prevent negative ages
- Assignment operator performs a deep copy of all members including nickname
- All getter and setter methods properly implemented

### main.cpp
The driver program that demonstrates the functionality of the `Person` class.

**Demonstration Includes:**
1. **Stack Objects**: Creates Person objects using default, 2-parameter, and 3-parameter constructors
2. **Assignment Operator**: Demonstrates deep-copy assignment (`four = three`)
3. **Dynamic Memory**: Creates Person objects on the heap using `new` (pointer variables)
4. **Setters**: Tests `setName()` and `setNickName()` on heap-allocated objects
5. **Mutators**: Demonstrates the `hasBirthday()` method
6. **Copy Constructor**: Passing a Person by value to `getOld()` invokes the copy constructor
7. **Operator Overloading**: Tests the overloaded `<<` operator for Person objects
8. **Cleanup**: Deletes heap-allocated objects with `delete`, triggering the destructor

## Building and Running

To compile and run this project:

```bash
g++ -o person_demo main.cpp Person.cpp
./person_demo
```

## Expected Output

The program demonstrates:
- Output of Person details using the overloaded `<<` operator (name, age, and nickname)
- Name and nickname changes using setters
- Birthday increment via `hasBirthday()`
- Deep-copy behavior of the assignment operator (changing `four`'s nickname does not affect `three`)
- Copy constructor invoked when passing a Person by value (age changes inside `getOld()` do not affect the original)
- Destructor messages printed as objects go out of scope or are deleted

## Learning Objectives

This project is ideal for learning:
- C++ class design and implementation
- Encapsulation principles
- Static class members and methods
- Constructor overloading
- Copy constructor and deep copy semantics
- Destructor and dynamic memory management (`new`/`delete`)
- Input validation
- Operator overloading (`<<` and `=`)
- Friend functions
- Separation of interface (`.h`) and implementation (`.cpp`)
