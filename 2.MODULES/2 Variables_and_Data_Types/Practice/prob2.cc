// ==========================================================
// Chapter 2 - Variables & Data Types
//
// Question 2: Type Conversion
//
// Input an integer.
// Store it in a double using implicit conversion.
// Then convert it back to an integer using explicit type casting.
// Display all three values.
// ==========================================================

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    double doubleValue = number;               // Implicit conversion
    int convertedValue = (int)doubleValue;     // Explicit conversion

    cout << "\nOriginal Integer : " << number << endl;
    cout << "Double Value     : " << doubleValue << endl;
    cout << "Converted Integer: " << convertedValue << endl;

    return 0;
}