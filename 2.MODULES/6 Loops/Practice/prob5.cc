// ==========================================================
// Chapter 6 - Loops
//
// Challenge
//
// Input a number.
//
// Reverse it using a loop.
//
// Example:
// Input : 12345
// Output: 54321
// ==========================================================

#include <iostream>
using namespace std;

int main()
{
    int number;
    int reversedNumber = 0;

    cout << "Enter a number: ";
    cin >> number;

    while (number != 0)
    {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    cout << "\nReversed Number: " << reversedNumber << endl;

    return 0;
}