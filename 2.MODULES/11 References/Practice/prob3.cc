// ==========================================================
// Chapter 11 - References
//
// Question 3
//
// Write a function that accepts a const string&
// and prints it.
// ==========================================================

#include <iostream>
#include <string>
using namespace std;

void printString(const string &text)
{
    cout << "\nString: " << text << endl;
}

int main()
{
    string text;

    cout << "Enter a string: ";
    getline(cin, text);

    printString(text);

    return 0;
}