// Basics about pointer
#include <iostream>
using namespace std;

int main()
{
    int n = 10;  // Declaring an integer variable n and initializing it with the value 10.
    cout << &n << "  - this is address of n" << endl;  // Printing the memory address of variable n using the address-of operator (&).

    int* ptr = &n;  // Declaring a pointer variable ptr of type int and assigning the memory address of n to it.
    cout << *ptr << endl;  // Dereferencing the pointer ptr to access the value stored at the memory address it points to.

    *ptr = 15;  // Assigning a new value 15 to the memory location pointed to by ptr, which effectively changes the value of n.
    cout << n << " - this is value of n" << endl;  // Printing the updated value of n.
}