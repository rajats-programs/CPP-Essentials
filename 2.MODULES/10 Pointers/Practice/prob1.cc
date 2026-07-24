// ==========================================================
// Chapter 10 - Pointers
//
// Question 1
//
// Print the value and address of a variable using a pointer.
// ==========================================================

#include <iostream>
using namespace std;

int main()
{
    int number = 100;
    int *ptr = &number;

    cout << "Value of Variable : " << *ptr << endl;
    cout << "Address of Variable: " << ptr << endl;

    return 0;
}