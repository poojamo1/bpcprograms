// Write a C++ program to implement a calculator using class concept

#include <iostream>

using namespace std;

class Calculator {
public:
    float add(float num1, float num2) {
        return num1 + num2;
    }

    float subtract(float num1, float num2) {
        return num1 - num2;
    }

    float multiply(float num1, float num2) {
        return num1 * num2;
        }

    float divide(float num1, float num2) {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error: Division by zero" << endl;
            return 0.0;
        }
    }
};

int main() {
    Calculator calc;

float num1, num2;
    int choice;

    cout << "Simple Calculator" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    float result;
    switch (choice) {
        case 1:
            result = calc.add(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 2:
            result = calc.subtract(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 3:
            result = calc.multiply(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 4:
            result = calc.divide(num1, num2);
            break;
        default:
        cout << "Invalid choice" << endl;
            break;
    }

    return 0;
}
