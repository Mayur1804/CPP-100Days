// The code defines two classes: ConstructorClass and DestructorClass.

// ConstructorClass has a constructor that prints a message when an instance is created.
// This constructor is automatically called when an object of ConstructorClass is instantiated.

// DestructorClass also has a constructor (which prints a message when an instance is created) and a destructor.
// The destructor is called automatically when an object of DestructorClass goes out of scope (e.g., when the function createDestructor() finishes execution).
// Note: The destructor message is missing an endl, so it won't display correctly.


// ConstructorDestructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// Define a class called "ConstructorClass"
class ConstructorClass
{
public:
    ConstructorClass() {
        cout << "Constructor Initialized" << endl;
    }
};

// Define another class called "DestructorClass"
class DestructorClass
{
public:
    DestructorClass() {
        cout << "Constructor Initialized in destructor class" << endl;
    }

    // Destructor for the class
    ~DestructorClass() {
        cout << "Destructor called"; // Note: Missing endl here
    }
};

// A function that creates an instance of DestructorClass
void createDestructor() {
    DestructorClass d1;
}

int main()
{
    ConstructorClass c1; // Create an instance of ConstructorClass

    createDestructor(); // Call the createDestructor function
}
