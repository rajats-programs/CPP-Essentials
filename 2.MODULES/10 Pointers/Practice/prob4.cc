// ==========================================================
// Chapter 10 - Pointers
//
// Challenge
//
// Create a pointer-to-pointer example and explain
// its output in comments.
// ==========================================================

#include <iostream>
using namespace std;

int main()
{
    int number = 25;

    int *ptr = &number;

    int **doublePtr = &ptr;

    // number stores the actual value.
    // ptr stores the address of number.
    // *ptr gives the value of number.
    // doublePtr stores the address of ptr.
    // *doublePtr gives ptr.
    // **doublePtr gives the value of number.

    cout << "Value of number      : " << number << endl;
    cout << "Address of number    : " << ptr << endl;
    cout << "Address of pointer   : " << doublePtr << endl;
    cout << "Value using *ptr     : " << *ptr << endl;
    cout << "Value using **doublePtr : " << **doublePtr << endl;

    return 0;
}