// Interfaces or Pure virtual functions
/*
A pure virtual function in C++ is a special kind of virtual function 
that has no implementation in the base class and is meant to be overridden
by derived classes. It is declared in the base class using the virtual 
keyword and is assigned the = 0 syntax at the end of its declaration, 
indicating that it has no implementation in the base class.
*/
#include <iostream>

using namespace std;

// Base class
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;

    // Normal member function
    void display() {
        std::cout << "Displaying shape..." << std::endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    // Implementation of the pure virtual function
    void draw() override {
        std::cout << "Drawing Circle" << std::endl;
    }
};

// Derived class 2
class Square : public Shape {
public:
    // Implementation of the pure virtual function
    void draw() override {
        std::cout << "Drawing Square" << std::endl;
    }
};

int main() {
    // Shape *shape = new Shape(); // Error: Cannot instantiate an object of abstract class

    // Creating objects of derived classes
    Circle circle;
    Square square;

    // Calling draw function polymorphically
    circle.draw();
    square.draw();

    // Calling non-virtual function
    circle.display();
    square.display();

    return 0;
}

