// ==========================================================
// Chapter 2 - Variables & Data Types
//
// Question 3: Memory Explorer
//
// Declare one variable of each type:
// - int
// - float
// - double
// - char
// - bool
//
// Print their values and their sizes using sizeof().
// ==========================================================

#include <iostream>
using namespace std;

int main()
{
    int integerValue = 100;
    float floatValue = 12.5f;
    double doubleValue = 98.7654;
    char character = 'A';
    bool flag = true;

    cout << "Value: " << integerValue
         << "\tSize: " << sizeof(integerValue) << " bytes" << endl;

    cout << "Value: " << floatValue
         << "\tSize: " << sizeof(floatValue) << " bytes" << endl;

    cout << "Value: " << doubleValue
         << "\tSize: " << sizeof(doubleValue) << " bytes" << endl;

    cout << "Value: " << character
         << "\tSize: " << sizeof(character) << " byte" << endl;

    cout << "Value: " << flag
         << "\tSize: " << sizeof(flag) << " byte" << endl;

    return 0;
}