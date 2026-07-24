// ==========================================================
// Chapter 3 - Input & Output
//
// Question 2
//
// Take a full name (with spaces) using getline()
// and print:
//
// Welcome, <Full Name>
// ==========================================================

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fullName;

    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "\nWelcome, " << fullName << endl;

    return 0;
}