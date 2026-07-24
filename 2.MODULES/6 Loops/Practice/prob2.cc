// ==========================================================
// Chapter 6 - Loops
//
// Question 2
//
// Find the sum of the first N natural numbers.
// ==========================================================

#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "Enter N: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "\nSum = " << sum << endl;

    return 0;
}