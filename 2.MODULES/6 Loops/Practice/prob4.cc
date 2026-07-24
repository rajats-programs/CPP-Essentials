// ==========================================================
// Chapter 6 - Loops
//
// Question 4
//
// Print the following pattern:
//
// *
// **
// ***
// ****
// *****
// ==========================================================

#include <iostream>
using namespace std;

int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int column = 1; column <= row; column++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}