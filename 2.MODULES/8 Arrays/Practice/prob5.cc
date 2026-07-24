// ==========================================================
// Chapter 8 - Arrays
//
// Challenge
//
// Search for a number using Linear Search.
// ==========================================================

#include <iostream>
using namespace std;

int main()
{
    int numbers[10];
    int key;
    bool found = false;

    cout << "Enter 10 integers:\n";

    for (int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
    }

    cout << "\nEnter element to search: ";
    cin >> key;

    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] == key)
        {
            cout << "\nElement found at index " << i << "." << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "\nElement not found." << endl;
    }

    return 0;
}