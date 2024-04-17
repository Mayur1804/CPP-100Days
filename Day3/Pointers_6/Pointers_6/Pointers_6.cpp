// Smart Pointers - They deallocate memory automatically

#include <iostream>
#include <memory>

using namespace std;

class MyClass
{
public:
    MyClass() {
        cout << "Constructor Invoked" << endl;
    }
    ~MyClass() {
        cout << "Destructor Invoked" << endl;
    }
};

int main()
{
    // Unique Ptr
    {
        cout << "UnPtr start" << endl;
        // Create a unique_ptr to MyClass
        unique_ptr<MyClass> unPtr1 = make_unique<MyClass>();
        // When unPtr1 goes out of scope, MyClass destructor is called
    }

    // Shared Ptr
    {
        cout << "shPtr start" << endl;
        // Create a shared_ptr to MyClass
        shared_ptr<MyClass> shPtr1 = make_shared<MyClass>();
        cout << "shared ptr count: " << shPtr1.use_count() << endl;

        {
            // Create another shared_ptr (shPtr2) sharing ownership with shPtr1
            shared_ptr<MyClass> shPtr2 = shPtr1;
            cout << "shared ptr count: " << shPtr1.use_count() << endl;
        }
        // When shPtr1 and shPtr2 go out of scope, MyClass destructor is called
        cout << "shared ptr count: " << shPtr1.use_count() << endl;
    }

    // Weak ptr
    cout << "WePtr start" << endl;
    weak_ptr<int> wePtr;
    {
        // Create a shared_ptr to an int with value 19
        shared_ptr<int> shPtr1 = make_shared<int>(19);
        // Assign shPtr1 to wePtr (weak_ptr)
        wePtr = shPtr1;

        // Access the value stored in shPtr1 via wePtr
        cout << "Value stored in wePtr: " << *wePtr.lock() << endl;
    }

    // Note: wePtr does not affect reference count; no memory deallocation here

    return 0;
}
