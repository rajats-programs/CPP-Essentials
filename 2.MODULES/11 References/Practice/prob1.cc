// ==========================================================
// Chapter 11 - References
//
// Question 1
//
// Swap two numbers using pass-by-reference.
// ==========================================================

#include <iostream>
using namespace std;

void swapNumbers(int &firstNumber, int &secondNumber)
{
    int temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;
}

int main()
{
    int firstNumber, secondNumber;

    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    swapNumbers(firstNumber, secondNumber);

    cout << "\nAfter Swapping:\n";
    cout << "First Number  : " << firstNumber << endl;
    cout << "Second Number : " << secondNumber << endl;

    return 0;
}