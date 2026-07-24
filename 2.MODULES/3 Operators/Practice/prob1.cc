// ==========================================================
// Chapter 3 - Input & Output
//
// Question 1
//
// Input your name and age.
//
// Output:
//
// Hello Rajat!
// You are 19 years old.
// ==========================================================

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "\nHello " << name << "!" << endl;
    cout << "You are " << age << " years old." << endl;

    return 0;
}