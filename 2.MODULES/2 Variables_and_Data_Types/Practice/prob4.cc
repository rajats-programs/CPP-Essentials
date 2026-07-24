// ==========================================================
// Chapter 2 - Variables & Data Types
//
// Challenge:
//
// Write a program that swaps two numbers:
//
// 1. Using a third variable.
// 2. Without using a third variable.
// ==========================================================

#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber;

    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    // -------------------------------
    // Method 1: Using a Third Variable
    // -------------------------------

    int temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;

    cout << "\nAfter Swapping (Using Third Variable):" << endl;
    cout << "First Number  : " << firstNumber << endl;
    cout << "Second Number : " << secondNumber << endl;

    // Swap back for Method 2
    temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;

    // -----------------------------------
    // Method 2: Without a Third Variable
    // -----------------------------------

    firstNumber = firstNumber + secondNumber;
    secondNumber = firstNumber - secondNumber;
    firstNumber = firstNumber - secondNumber;

    cout << "\nAfter Swapping (Without Third Variable):" << endl;
    cout << "First Number  : " << firstNumber << endl;
    cout << "Second Number : " << secondNumber << endl;

    return 0;
}