// ==========================================================
// Chapter 9 - Strings
//
// Question 3
//
// Reverse the string.
// ==========================================================

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;

    cout << "Enter a string: ";
    getline(cin, text);

    cout << "\nReversed String: ";

    for (int i = text.length() - 1; i >= 0; i--)
    {
        cout << text[i];
    }

    cout << endl;

    return 0;
}