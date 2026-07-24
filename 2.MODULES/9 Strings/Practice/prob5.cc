// ==========================================================
// Chapter 9 - Strings
//
// Challenge
//
// Check whether the string is a palindrome.
// ==========================================================

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    bool isPalindrome = true;

    cout << "Enter a string: ";
    getline(cin, text);

    int start = 0;
    int end = text.length() - 1;

    while (start < end)
    {
        if (text[start] != text[end])
        {
            isPalindrome = false;
            break;
        }

        start++;
        end--;
    }

    if (isPalindrome)
    {
        cout << "\nThe string is a palindrome." << endl;
    }
    else
    {
        cout << "\nThe string is not a palindrome." << endl;
    }

    return 0;
}