// ==========================================================
// Chapter 10 - Pointers
//
// Question 3
//
// Traverse an array using pointer arithmetic.
// ==========================================================

#include <iostream>
using namespace std;

int main()
{
    int numbers[5];

    cout << "Enter 5 integers:\n";

    for (int i = 0; i < 5; i++)
    {
        cin >> numbers[i];
    }

    int *ptr = numbers;

    cout << "\nArray Elements:\n";

    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << " ";
    }

    cout << endl;

    return 0;
}