#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    char again;

    cout << "Welcome to the simple info program!" << endl;

    do {
        cout << "Enter your name: ";
        cin >> name;

        cout << "Enter your age: ";
        cin >> age;

        cout << "Hello, " << name << "! You are " << age << " years old." << endl;

        cout << "Would you like to enter another person? (y/n): ";
        cin >> again;
        cout << endl;

    } while (again == 'y' || again == 'Y');

    cout << "Thanks for using this program. Goodbye!" << endl;
    return 0;
}