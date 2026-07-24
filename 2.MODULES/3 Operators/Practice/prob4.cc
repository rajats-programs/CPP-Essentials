// ==========================================================
// Chapter 3 - Input & Output
//
// Challenge
//
// Take two integers as input and print:
//
// First Number :
// Second Number :
// Sum :
// Difference :
// Product :
// Quotient :
// ==========================================================

#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber;

    cout << "Enter first number: ";
    cin >> firstNumber;

    cout << "Enter second number: ";
    cin >> secondNumber;

    cout << "\nFirst Number : " << firstNumber << endl;
    cout << "Second Number: " << secondNumber << endl;
    cout << "Sum          : " << firstNumber + secondNumber << endl;
    cout << "Difference   : " << firstNumber - secondNumber << endl;
    cout << "Product      : " << firstNumber * secondNumber << endl;

    if (secondNumber != 0)
    {
        cout << "Quotient     : "
             << static_cast<double>(firstNumber) / secondNumber << endl;
    }
    else
    {
        cout << "Quotient     : Division by zero is not possible." << endl;
    }

    return 0;
}