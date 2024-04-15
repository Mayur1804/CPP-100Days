// This program demonstrates the use of pointers with arrays.

#include <iostream>
using namespace std;

int main()
{
    // Initialize an array of integers.
    int numbers[5] = { 2,3,5,7,9 };

    // Print the third element of the array using array indexing.
    cout << numbers[2] << endl;

    // Print the third element of the array using pointer arithmetic.
    // Here, 'numbers' is a pointer to the first element of the array.
    // Adding 2 to it gives a pointer to the third element, which we then dereference to get the value.
    cout << *(numbers + 2) << endl;

    // Print all elements of the array using a for loop and pointer arithmetic.
    // Note: Care must be taken when using pointer arithmetic to avoid accessing memory outside the array,
    // which can lead to undefined behavior.
    cout << "Printing all elements using pointer arithmetic:" << endl;
    for (int i = 0; i <= 4; i++)
    {
        cout << *(numbers + i) << "  ";
    }
}
