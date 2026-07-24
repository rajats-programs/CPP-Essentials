// ==========================================================
// Chapter 8 - Arrays
//
// Question 4
//
// Reverse the array.
// ==========================================================

#include <iostream>
using namespace std;

int main()
{
    int numbers[10];

    cout << "Enter 10 integers:\n";

    for (int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
    }

    cout << "\nReversed Array:\n";

    for (int i = 9; i >= 0; i--)
    {
        cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;
}