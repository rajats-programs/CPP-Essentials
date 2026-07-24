// ==========================================================
// Chapter 7 - Functions
//
// Question 1
//
// Create a function to calculate the square of a number.
// ==========================================================

#include <iostream>
using namespace std;

int square(int number)
{
    return number * number;
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "\nSquare = " << square(number) << endl;

    return 0;
}
