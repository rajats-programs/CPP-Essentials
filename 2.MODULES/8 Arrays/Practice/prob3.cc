// ==========================================================
// Chapter 8 - Arrays
//
// Question 3
//
// Find the average of all elements.
// ==========================================================

#include <iostream>
using namespace std;

int main()
{
    int numbers[10];
    int sum = 0;

    cout << "Enter 10 integers:\n";

    for (int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
        sum += numbers[i];
    }

    double average = static_cast<double>(sum) / 10;

    cout << "\nAverage = " << average << endl;

    return 0;
}