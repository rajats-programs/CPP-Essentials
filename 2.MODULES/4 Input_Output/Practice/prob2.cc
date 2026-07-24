// ==========================================================
// Chapter 4 - Operators
//
// Question 2
//
// Input two numbers.
//
// Print:
//
// Greater number
// Smaller number
// Whether they are equal
// ==========================================================

#include <iostream>
using namespace std;

int main()
{
    double firstNumber, secondNumber;

    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    if (firstNumber > secondNumber)
    {
        cout << "\nGreater Number : " << firstNumber << endl;
        cout << "Smaller Number : " << secondNumber << endl;
    }
    else if (secondNumber > firstNumber)
    {
        cout << "\nGreater Number : " << secondNumber << endl;
        cout << "Smaller Number : " << firstNumber << endl;
    }
    else
    {
        cout << "\nBoth numbers are equal." << endl;
    }

    cout << "Are they equal? : "
         << (firstNumber == secondNumber ? "Yes" : "No") << endl;

    return 0;
}