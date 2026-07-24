// ==========================================================
// Chapter 5 - Decision Making
//
// Question 3
//
// Create a menu using switch:
//
// 1. Add
// 2. Subtract
// 3. Multiply
// 4. Divide
//
// Take two numbers and perform the selected operation.
// ==========================================================

#include <iostream>
using namespace std;

int main()
{
    int choice;
    double firstNumber, secondNumber;

    cout << "===== Calculator =====" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    cout << endl;

    switch (choice)
    {
        case 1:
            cout << "Result : " << firstNumber + secondNumber;
            break;

        case 2:
            cout << "Result : " << firstNumber - secondNumber;
            break;

        case 3:
            cout << "Result : " << firstNumber * secondNumber;
            break;

        case 4:
            if (secondNumber != 0)
                cout << "Result : " << firstNumber / secondNumber;
            else
                cout << "Division by zero is not possible.";
            break;

        default:
            cout << "Invalid Choice.";
    }

    cout << endl;

    return 0;
}