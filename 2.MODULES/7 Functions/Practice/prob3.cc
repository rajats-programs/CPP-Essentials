// ==========================================================
// Chapter 7 - Functions
//
// Question 3
//
// Create overloaded functions to calculate:
//
// - Sum of two integers
// - Sum of two doubles
// ==========================================================

#include <iostream>
using namespace std;

int sum(int firstNumber, int secondNumber)
{
    return firstNumber + secondNumber;
}

double sum(double firstNumber, double secondNumber)
{
    return firstNumber + secondNumber;
}

int main()
{
    cout << "Sum of Integers: " << sum(10, 20) << endl;
    cout << "Sum of Doubles : " << sum(12.5, 7.8) << endl;

    return 0;
}
