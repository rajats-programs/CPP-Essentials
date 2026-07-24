// ==========================================================
// Chapter 7 - Functions
//
// Challenge
//
// Create a calculator using functions:
//
// - Addition
// - Subtraction
// - Multiplication
// - Division
// ==========================================================

#include <iostream>
using namespace std;

double add(double firstNumber, double secondNumber)
{
    return firstNumber + secondNumber;
}

double subtract(double firstNumber, double secondNumber)
{
    return firstNumber - secondNumber;
}

double multiply(double firstNumber, double secondNumber)
{
    return firstNumber * secondNumber;
}

double divide(double firstNumber, double secondNumber)
{
    return firstNumber / secondNumber;
}

int main()
{
    double firstNumber, secondNumber;

    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    cout << "\nAddition       : " << add(firstNumber, secondNumber) << endl;
    cout << "Subtraction    : " << subtract(firstNumber, secondNumber) << endl;
    cout << "Multiplication : " << multiply(firstNumber, secondNumber) << endl;

    if (secondNumber != 0)
    {
        cout << "Division       : " << divide(firstNumber, secondNumber) << endl;
    }
    else
    {
        cout << "Division       : Division by zero is not possible." << endl;
    }

    return 0;
}