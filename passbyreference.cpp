// Write a C++ program that subtracts two numbers using the concept of pass by reference

#include <iostream>

using namespace std;

void subtractNumbers(int& num1, int& num2) {
    num1 -= num2;
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    subtractNumbers(num1, num2);

    cout << "Result: " << num1 << endl;

    return 0;
}
