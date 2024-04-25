// Enums.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Define an enumeration for weekdays
enum Weekday {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main() {
    Weekday today = Wednesday; // Assign Wednesday to the 'today' variable
    cout << "Today is day " << today + 1 << endl; // Adding 1 to match human-readable day numbers
    return 0;
}
