// ==========================================================
// Chapter 9 - Strings
//
// Question 4
//
// Check whether two strings are equal.
// ==========================================================

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstString, secondString;

    cout << "Enter first string: ";
    getline(cin, firstString);

    cout << "Enter second string: ";
    getline(cin, secondString);

    if (firstString == secondString)
    {
        cout << "\nStrings are equal." << endl;
    }
    else
    {
        cout << "\nStrings are not equal." << endl;
    }

    return 0;
}