// This program demonstrates the use of dynamic arrays in C++. It allows the user to specify the size of the array at runtime and input the elements of the array. It then prints the elements using pointer arithmetic.

#include <iostream> 

using namespace std;

int main()
{
    int size; // Declare an integer variable 'size' to store the size of the array
    cout << " Enter size - "; // Prompt the user to enter the size of the array
    cin >> size; // Read the user input and store it in 'size'

    int* myArray = new int[size]; // Declare a pointer 'myArray' and allocate memory for 'size' number of integers

    for (int i = 0; i < size; i++) // Loop from 0 to 'size'
    {
        cout << "array{" << i << "} - "; // Prompt the user to enter the i-th element of the array
        cin >> myArray[i]; // Read the user input and store it in the i-th element of the array
    }

    for (int i = 0; i < size; i++) // Loop from 0 to 'size'
    {
        cout << *(myArray + i) << "  "; // Print the i-th element of the array using pointer arithmetic
    }

    delete[] myArray; // Deallocate the memory previously allocated for the array
    myArray = NULL; // Set the pointer 'myArray' to NULL
}
