// Pointers_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Void Pointer - It can point to any datatype

#include <iostream>
using namespace std;

void print(void* ptr, char type) {                       // Defining a function named print that takes a void pointer and a character type as arguments.
	switch (type){                                       // Switching based on the character type provided.
	case 'i':cout << *((int*)ptr) << endl; break;        // Casting the void pointer to an integer pointer and dereferencing it to print the integer value.
	case 'c':cout << *((char*)ptr) << endl; break;	     // Casting the void pointer to a character pointer and dereferencing it to print the character value.
	} 
}

int main()
{
	int number = 12;
	char letter = 'd';
	
	print(&letter, 'c');
	print(&number, 'i');
}