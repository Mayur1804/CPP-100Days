// References is an alias for an existing variable. 
// It allows you to manipulate the same memory location using a different name. 
// Unlike pointers, references cannot be null and must be initialized when declared.


#include <iostream>

using namespace std;

void autoInc(int& val) {
    val++; // Increment the value of 'val' by 1
}

int main()
{
    int a = 7; // Declare and initialize an integer variable 'a' with the value 7
    int& ref = a; // Create a reference 'ref' that refers to the same memory location as 'a'
    cout << ref << endl; // Print the value of 'ref' (which is the same as 'a')

    autoInc(a); // Call the 'autoInc' function with 'a' as an argument
    cout << a << endl; // Print the updated value of 'a' after the function call
}

