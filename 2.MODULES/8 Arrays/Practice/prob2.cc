// ==========================================================
// Chapter 8 - Arrays
//
// Question 2
//
// Find the largest element.
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

    int largest = numbers[0];

    for (int i = 1; i < 10; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    cout << "\nLargest Element: " << largest << endl;

    return 0;
}