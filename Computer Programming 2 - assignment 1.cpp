#include <iostream>

using namespace std;

int main()
{
    char op;
    double num1,num2;

    // It allows user to enter operator i.e. +, -
    cout<< "Enter an operator ( +, - ) : ";
    cin >> op;

    // It allow user to enter the operands
    cout<< "Enter any two values one by one : ";
    cin >> num1 >> num2;

    // Switch statement begins
    switch (op) {

        // If user enter +
        case '+':
            cout << num1 << '+' << num2 << '=' << (num1 + num2);

            break;

           // If user enter -
        case '-':
            cout << num1 << '-' << num2 << '=' << (num1 - num2);

            break;

        // If the operator is other than +, -,
        // error message will display
        default:
            cout << op << " is an invalid operator";

    } // switch statement ends

    return 0;
}


