# Person2026T

A C++ project demonstrating object-oriented programming concepts with a `Person` class implementation.

## Overview

This repository contains a simple C++ application that implements a `Person` class to demonstrate fundamental OOP concepts including:
- Encapsulation with private member variables
- Getters and setters (accessors and mutators)
- Constructors (default and parameterized)
- Static class members
- Input validation
- Operator overloading

## Files

### Person.h
The header file that defines the `Person` class interface.

**Key Components:**
- **Private Members:**
  - `string name` - Stores the person's name
  - `int age` - Stores the person's age
  - `bool isValidAge(int age)` - Private helper method to validate age values
  - `static int population` - Static member tracking total Person objects created

- **Public Methods:**
  - `string getName()` - Returns the person's name
  - `int getAge()` - Returns the person's age
  - `void setName(string name)` - Sets the person's name
  - `void setAge(int age)` - Sets the person's age with validation
  - `void hasBirthday()` - Increments the person's age by 1
  - `Person()` - Default constructor (sets name to "John Doe" and age to 42)
  - `Person(string name, int age)` - Parameterized constructor
  - `static int getPopulation()` - Returns the total count of Person objects created

- **Operator Overloading:**
  - Friend function overloading the `<<` operator for easy output formatting
  - Formats output as: "[name] is [age] years old."

### Person.cpp
The implementation file containing the method definitions for the `Person` class.

**Key Features:**
- Initializes the static `population` variable to 0
- Implements age validation in `isValidAge()` (checks if age >= 0)
- Both constructors increment the `population` counter
- `setAge()` uses validation to prevent negative ages
- All getter and setter methods properly implemented

### main.cpp
The driver program that demonstrates the functionality of the `Person` class.

**Demonstration Includes:**
1. **Population Tracking**: Shows how the static population counter increases as objects are created
2. **Constructors**: Creates objects using both default and parameterized constructors
3. **Getters**: Retrieves and displays name and age information
4. **Setters**: Tests setting name and age (including invalid age -65 to show validation)
5. **Mutators**: Demonstrates the `hasBirthday()` method
6. **Operator Overloading**: Tests the overloaded `<<` operator for Person objects

## Building and Running

To compile and run this project:

```bash
g++ -o person_demo main.cpp Person.cpp
./person_demo
```

## Expected Output

The program demonstrates:
- Initial population count of 0
- Population incrementing to 1 after first Person object
- Population incrementing to 2 after second Person object
- Display of Person details using getters
- Name change using setter
- Age validation (attempting to set age to -65 will be rejected)
- Birthday increment functionality
- Formatted output using the overloaded `<<` operator

## Learning Objectives

This project is ideal for learning:
- C++ class design and implementation
- Encapsulation principles
- Static class members and methods
- Constructor overloading
- Input validation
- Operator overloading
- Friend functions
- Separation of interface (`.h`) and implementation (`.cpp`)
