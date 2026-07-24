// ==========================================================
// Chapter 6 - Loops
//
// Question 1
//
// Print numbers from 1 to N.
// ==========================================================

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter N: ";
    cin >> n;

    cout << "\nNumbers from 1 to " << n << ":\n";

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}