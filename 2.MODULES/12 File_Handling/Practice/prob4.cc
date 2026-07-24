// ==========================================================
// Chapter 14 - File Handling
//
// Challenge
//
// Create a simple Student Record System
// using file handling.
//
// For each student store:
//
// - Name
// - Age
// - CGPA
//
// Save multiple student records into a file
// and display them.
// ==========================================================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age;
    double cgpa;
};

int main()
{
    int numberOfStudents;

    cout << "Enter number of students: ";
    cin >> numberOfStudents;

    cin.ignore();

    ofstream writeFile("records.txt");

    for (int i = 0; i < numberOfStudents; i++)
    {
        Student student;

        cout << "\nStudent " << i + 1 << endl;

        cout << "Name : ";
        getline(cin, student.name);

        cout << "Age : ";
        cin >> student.age;

        cout << "CGPA : ";
        cin >> student.cgpa;

        cin.ignore();

        writeFile << student.name << endl;
        writeFile << student.age << endl;
        writeFile << student.cgpa << endl;
    }

    writeFile.close();

    ifstream readFile("records.txt");

    Student student;

    cout << "\n========== Student Records ==========\n";

    while (getline(readFile, student.name))
    {
        readFile >> student.age;
        readFile >> student.cgpa;
        readFile.ignore();

        cout << "\nName : " << student.name << endl;
        cout << "Age  : " << student.age << endl;
        cout << "CGPA : " << student.cgpa << endl;
    }

    readFile.close();

    return 0;
}

