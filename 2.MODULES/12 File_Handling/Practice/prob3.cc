// ==========================================================
// Chapter 14 - File Handling
//
// Question 3
//
// Append your branch to the same file.
//
// Read the updated contents.
// ==========================================================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream writeFile("student.txt", ios::app);

    writeFile << "Branch  : Information Science and Engineering" << endl;

    writeFile.close();

    ifstream readFile("student.txt");

    string line;

    cout << "Updated File Contents:\n\n";

    while (getline(readFile, line))
    {
        cout << line << endl;
    }

    readFile.close();

    return 0;
}