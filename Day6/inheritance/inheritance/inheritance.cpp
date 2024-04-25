// inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 

#include <iostream>

using namespace std;

// Define a base class called "Entity"
class Entity {
public:
    float X, Y;

    // A member function to move the entity by specified amounts
    void Move(float xa, float ya) {
        X += xa;
        Y += ya;

        cout << X << "," << Y << " moved" << endl;
    }
};

// Define a derived class called "Player" that inherits from "Entity"
class Player : public Entity {
public:
    const char* Name;

    // A member function to print the player's name
    void printName() {
        cout << Name << " is the name" << endl;
    }
};

int main() {
    // Create an instance of the Player class
    Player p1;
    p1.X = 10; // Set initial X coordinate
    p1.Y = 10; // Set initial Y coordinate
    p1.Name = "playerOne"; // Set player's name

    // Move the player by (2.0, 2.0)
    p1.Move(2.0, 2.0);

    // Print the player's name
    p1.printName();

    // Program execution ends here
}
