// ==========================================================
// Chapter 9 - Strings
//
// Question 1
//
// Input a string.
//
// Print its length.
// ==========================================================

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;

    cout << "Enter a string: ";
    getline(cin, text);

    cout << "\nLength = " << text.length() << endl;

    return 0;
}