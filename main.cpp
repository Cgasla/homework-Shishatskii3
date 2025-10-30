#include <iostream>
using namespace std;

int main() {
    double a, b, result;
    char op;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> op;

    cout << "Enter the second number: ";
    cin >> b;

    switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b != 0)
                result = a / b;
            else {
                cout << "Error: division by zero!" << endl;
                return 1;
            }
            break;
        default:
            cout << "Unknown operation!" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}
