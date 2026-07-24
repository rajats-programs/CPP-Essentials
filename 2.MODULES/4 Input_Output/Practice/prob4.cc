// ==========================================================
// Chapter 4 - Operators
//
// Challenge
//
// Input three numbers and print the largest
// using only relational and logical operators
// (no loops).
// ==========================================================

#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, thirdNumber;

    cout << "Enter three numbers: ";
    cin >> firstNumber >> secondNumber >> thirdNumber;

    if (firstNumber >= secondNumber && firstNumber >= thirdNumber)
    {
        cout << "\nLargest Number : " << firstNumber << endl;
    }
    else if (secondNumber >= firstNumber && secondNumber >= thirdNumber)
    {
        cout << "\nLargest Number : " << secondNumber << endl;
    }
    else
    {
        cout << "\nLargest Number : " << thirdNumber << endl;
    }

    return 0;
}