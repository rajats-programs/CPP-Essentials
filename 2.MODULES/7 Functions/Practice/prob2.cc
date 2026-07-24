// ==========================================================
// Chapter 7 - Functions
//
// Question 2
//
// Create a function to check whether a number
// is even or odd.
// ==========================================================

#include <iostream>
using namespace std;

bool isEven(int number)
{
    return number % 2 == 0;
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isEven(number))
    {
        cout << "\nThe number is Even." << endl;
    }
    else
    {
        cout << "\nThe number is Odd." << endl;
    }

    return 0;
}