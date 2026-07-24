// ==========================================================
// Chapter 6 - Loops
//
// Question 3
//
// Print the multiplication table of a number.
// ==========================================================

#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "\nMultiplication Table of " << number << ":\n";

    for (int i = 1; i <= 10; i++)
    {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}