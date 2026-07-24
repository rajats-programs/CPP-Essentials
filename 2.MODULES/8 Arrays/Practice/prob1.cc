// ==========================================================
// Chapter 8 - Arrays
//
// Question 1
//
// Input 10 integers.
//
// Print them.
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

    cout << "\nArray Elements:\n";

    for (int i = 0; i < 10; i++)
    {
        cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;
}