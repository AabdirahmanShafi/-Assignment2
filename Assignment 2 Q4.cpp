#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    if (num1 > num2) {
        operation = '>';
    } else if (num1 < num2) {
        operation = '<';
    } else {
        operation = '=';
    }

    switch (operation) {
        case '>':
            cout << "The maximum number is: " << num1 <<endl;
            break;
        case '<':
            cout << "The maximum number is: " << num2 <<endl;
            break;
        case '=':
            cout << "Both numbers are equal." <<endl;
            break;
    }

    return 0;
}
