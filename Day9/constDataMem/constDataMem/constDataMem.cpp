// constDataMem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class MyClass {
private:
    const int constantValue; // Declaration of a const data member

public:
    // Constructor to initialize the const data member
    MyClass(int value, int anotherVal) : constantValue(value) {}

    // Member function to retrieve the value of the const data member
    int getConstantValue() const {
        return constantValue;
    }

    // Member function to demonstrate that const data member cannot be modified
    // Uncommenting the line below will cause a compilation error
    // void modifyConstantValue() {
    //     constantValue = 10;
    // }
};

int main() {
    MyClass obj(5,10); // Creating an object of MyClass with constantValue initialized to 5
    std::cout << "Constant Value: " << obj.getConstantValue() << std::endl;

    // Uncommenting the line below will cause a compilation error
    // obj.modifyConstantValue();

    return 0;
}