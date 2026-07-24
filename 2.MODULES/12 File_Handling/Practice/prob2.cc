// ==========================================================
// Chapter 14 - File Handling
//
// Question 2
//
// Read the contents of the file
// and display them.
// ==========================================================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file("student.txt");
    string line;

    cout << "File Contents:\n\n";

    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();

    return 0;
}