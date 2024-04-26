/* virtual function is a member function declared in a base
   class and redefined (overridden) by a derived class. */ 
/* When you refer to a derived class object using a pointer or
   a reference to the base class, you can call a virtual function 
   for that object and execute the derived class’s version of the method. */

#include <iostream>
using namespace std;

class base {
public:
    virtual void printName() {
        cout << "from base" << endl;
    }
};

class derived : public base {
public:
    void printName() {
        cout << "from derived" << endl;
    }
};

int main() {
    base* b = new base();
    b->printName(); // Calls base class's printName()

    derived* d = new derived();
    d->printName(); // Calls derived class's printName()

    // Example 1
    base* b1 = new derived();
    b1->printName(); // Calls derived class's printName() (runtime polymorphism)

    // Example 2
    derived d1;
    base* b2 = &d1;
    b2->printName(); // Calls derived class's printName() (compile-time binding)

    // Clean up dynamically allocated memory
    delete b;
    delete d;
    delete b1;

    return 0;
}
