// ==========================================================
// Chapter 4 - Operators
//
// Question 1
//
// Input two integers and display:
//
// Addition
// Subtraction
// Multiplication
// Division
// Modulus
// ==========================================================

#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber;

    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;

    cout << "\nAddition       : " << firstNumber + secondNumber << endl;
    cout << "Subtraction    : " << firstNumber - secondNumber << endl;
    cout << "Multiplication : " << firstNumber * secondNumber << endl;

    if (secondNumber != 0)
    {
        cout << "Division       : "
             << static_cast<double>(firstNumber) / secondNumber << endl;
        cout << "Modulus        : " << firstNumber % secondNumber << endl;
    }
    else
    {
        cout << "Division       : Division by zero is not possible." << endl;
        cout << "Modulus        : Undefined (division by zero)." << endl;
    }

    return 0;
}