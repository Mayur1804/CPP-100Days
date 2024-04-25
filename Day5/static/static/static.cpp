// static - is a class member (variable or function) that 
// belongs to the class itself rather 
// than to any specific 
// instance of the class. 
// It is shared among all instances of the class.

// This program demonstrates the use of static members in a C++ class.

#include <iostream>
using namespace std;

// Define a class called 'Base'
class Base {
public:
    int x; // Non-static member variable 'x' (instance-specific)

    // Static member variable 'y' shared among all instances of 'Base'
    static int y;

    // Static function 'printY' to print the value of 'y'
    static void printY() {
        cout << y << endl;
    }
};

// Initialize the static member 'y' outside the class definition
int Base::y;

int main() {
    // Create two instances of the 'Base' class
    Base b1;
    b1.x = 10;

    Base b2;
    b2.x = 20;

    // Set the value of the static member 'y' to 35
    Base::y = 35;

    // Call the static function 'printY' to print the value of 'y'
    Base::printY();

    // Print the value of 'y' directly (same as Base::y)
    cout << Base::y;

    return 0; // Indicates successful program execution
}
