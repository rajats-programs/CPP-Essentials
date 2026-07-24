// ==========================================================
// Chapter 5 - Decision Making
//
// Question 2
//
// Input a year.
//
// Check whether it is a leap year.
// ==========================================================

#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        cout << "\n" << year << " is a Leap Year." << endl;
    else
        cout << "\n" << year << " is not a Leap Year." << endl;

    return 0;
}