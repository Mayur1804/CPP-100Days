#include <iostream>
#include <string.h> // Including the header file for string functions

using namespace std;

// Function to check if a given string is a palindrome
bool isPalindrome(string text) {
    // Loop through the string characters from the beginning to the middle
    for (int i = 0; i < text.length() / 2; i++) {
        // Check if the character at position i is not equal to its corresponding character from the end
        if (text[i] != text[text.length() - i - 1])
            return false; // If characters don't match, return false
    }
    return true; // If all characters match, return true (string is a palindrome)
}

// Main function
int main() {
    string test = "wonow"; // Define the test string

    // Check if the test string is a palindrome using the isPalindrome function
    if (isPalindrome(test)) {
        cout << "test is a palindrome"; // If it's a palindrome, print this message
    }
    else
    {
        cout << "test is not palindrome";
    }
    

    return 0; // Return 0 to indicate successful execution
}
