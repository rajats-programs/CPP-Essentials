// ==========================================================
// Chapter 9 - Strings
//
// Question 2
//
// Count vowels.
// ==========================================================

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    int vowelCount = 0;

    cout << "Enter a string: ";
    getline(cin, text);

    for (char ch : text)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowelCount++;
        }
    }

    cout << "\nNumber of Vowels = " << vowelCount << endl;

    return 0;
}