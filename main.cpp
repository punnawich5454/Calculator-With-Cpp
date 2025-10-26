#include <iostream>
using namespace std;

int main() {
    cout << "Calculator With Cpp" << endl;
    cout << "Enter two numbers: ";
    int number, number2 = 0;
    cin >> number;
    cout << "Enter two numbers: ";
    cin >> number2;
    cout << "Choose an operation (+, -, *, /): ";
    char operation;
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "Result: " << number + number2 << endl;
            break;
        case '-':
            cout << "Result: " << number - number2 << endl;
            break;
        case '*':
            cout << "Result: " << number * number2 << endl;
            break;
        case '/':
            if (number2 != 0) {
                cout << "Result: " << number / number2 << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
    }
}