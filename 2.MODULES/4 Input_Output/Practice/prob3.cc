// ==========================================================
// Chapter 4 - Operators
//
// Question 3
//
// Input age.
//
// Print whether the person is eligible to vote
// using the ternary operator.
// ==========================================================

#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    cout << "\n"
         << (age >= 18 ? "Eligible to Vote" : "Not Eligible to Vote")
         << endl;

    return 0;
}