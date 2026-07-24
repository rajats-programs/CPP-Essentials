// ==========================================================
// Chapter 5 - Decision Making
//
// Challenge
//
// Input salary and years of experience.
//
// Print whether the employee gets a bonus
// according to conditions you define logically.
//
// Bonus Rules:
// - Experience >= 5 years AND Salary < 50000
//   -> Eligible for Bonus
// - Otherwise
//   -> Not Eligible
// ==========================================================

#include <iostream>
using namespace std;

int main()
{
    double salary;
    int yearsOfExperience;

    cout << "Enter salary: ";
    cin >> salary;

    cout << "Enter years of experience: ";
    cin >> yearsOfExperience;

    if (yearsOfExperience >= 5 && salary < 50000)
    {
        cout << "\nEmployee is Eligible for Bonus." << endl;
    }
    else
    {
        cout << "\nEmployee is Not Eligible for Bonus." << endl;
    }

    return 0;
}