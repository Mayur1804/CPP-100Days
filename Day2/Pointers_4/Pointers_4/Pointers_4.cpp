// This program uses pointers to return multiple values from a function.

#include <iostream>
using namespace std;

// This function takes an array of integers, its size, and pointers to two integers.
// It finds the minimum and maximum values in the array and assigns them to the variables pointed to by min and max.
void getMinAndMax(int numbers[], int size, int* min, int* max) {
    // Loop through the array starting from the second element (index 1).
    for (int i = 1; i < size; i++)
    {
        // If the current number is less than the current minimum, update the minimum.
        if (numbers[i] < *min)
        {
            *min = numbers[i];
        }
        // If the current number is greater than the current maximum, update the maximum.
        if (numbers[i] > *max)
        {
            *max = numbers[i];
        }
    }
}

int main()
{
    // Initialize an array of integers.
    int numbers[5] = { 8,6,-26,37,44 };

    // Initialize the maximum and minimum to the first element of the array.
    int max = numbers[0];
    int min = numbers[0];

    // Call the function to update the minimum and maximum.
    getMinAndMax(numbers, 5, &min, &max);

    // Print the minimum and maximum.
    cout << "min is " << min << endl;
    cout << "max is " << max << endl;
}
