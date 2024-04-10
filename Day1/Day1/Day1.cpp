

#include <iostream>
using namespace std;

int main()
{
    
    // this will give the address of variable
    int ptr = 10;
    cout << &ptr << endl;

    int* n = &ptr;
    cout << *n << endl;
}