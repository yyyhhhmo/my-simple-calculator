#include <iostream>
#include "main.h"
using namespace std;

int main() {
    double num1, num2;
    char operation;
    char exitChoice = 'n';

    while (exitChoice != 'y' && exitChoice != 'Y') {
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter operation (+, -, *, /): ";
        cin >> operation;

        cout << "Enter second number: ";
        cin >> num2;

        switch (operation) {
            case '+':
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case '-':
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case '*':
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case '/':
                if (num2 != 0) {
                    cout << "Result: " << divide(num1, num2) << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            default:
                cout << "Error: Invalid operation!" << endl;
        }

        cout << "Do you want to exit the calculator? (y/n): ";
        cin >> exitChoice;
    }

    cout << "Goodbye!" << endl;
    return 0;
}
