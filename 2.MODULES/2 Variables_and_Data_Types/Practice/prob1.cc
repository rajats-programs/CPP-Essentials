// ==========================================================
// Chapter 2 - Variables & Data Types
//
// Question 1: Student Information
//
// Take the following as input:
// - Name
// - Age
// - Height
// - CGPA
//
// Display them in a well-formatted way.
// ==========================================================

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int age;
    float height;
    double cgpa;

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Height (in cm): ";
    cin >> height;

    cout << "Enter CGPA: ";
    cin >> cgpa;

    cout << "\n----- Student Information -----\n";
    cout << "Name   : " << name << endl;
    cout << "Age    : " << age << endl;
    cout << "Height : " << height << " cm" << endl;
    cout << "CGPA   : " << cgpa << endl;

    return 0;
}