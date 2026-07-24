// ==========================================================
// Chapter 14 - File Handling
//
// Question 1
//
// Create a text file and write your name
// and college into it.
// ==========================================================

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("student.txt");

    file << "Name    : Your Name" << endl;
    file << "College : Mangalore Institute of Technology and Engineering" << endl;

    file.close();

    cout << "Data written successfully." << endl;

    return 0;
}