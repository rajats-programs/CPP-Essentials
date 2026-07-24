// ==========================================================
// Chapter 11 - References
//
// Challenge
//
// Compare pass-by-value and pass-by-reference
// by showing how modifying a parameter affects
// the original variable.
// ==========================================================

#include <iostream>
using namespace std;

void passByValue(int number)
{
    number += 10;
    cout << "Inside passByValue      : " << number << endl;
}

void passByReference(int &number)
{
    number += 10;
    cout << "Inside passByReference  : " << number << endl;
}

int main()
{
    int value = 50;

    cout << "Original Value          : " << value << endl;

    passByValue(value);

    cout << "After passByValue       : " << value << endl;

    passByReference(value);

    cout << "After passByReference   : " << value << endl;

    return 0;
}