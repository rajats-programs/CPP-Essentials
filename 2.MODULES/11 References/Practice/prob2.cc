// ==========================================================
// Chapter 11 - References
//
// Question 2
//
// Write a function that increments a variable
// using a reference.
// ==========================================================

#include <iostream>
using namespace std;

void increment(int &number)
{
    number++;
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    increment(number);

    cout << "\nAfter Increment: " << number << endl;

    return 0;
}