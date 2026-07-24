// ==========================================================
// Chapter 5 - Decision Making
//
// Question 1
//
// Input marks.
//
// Print:
//
// Distinction (>=75)
// First Class (60-74)
// Second Class (50-59)
// Pass (35-49)
// Fail (<35)
// ==========================================================

#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    cout << "\nResult: ";

    if (marks >= 75)
        cout << "Distinction";
    else if (marks >= 60)
        cout << "First Class";
    else if (marks >= 50)
        cout << "Second Class";
    else if (marks >= 35)
        cout << "Pass";
    else
        cout << "Fail";

    cout << endl;

    return 0;
}