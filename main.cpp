#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {
    string name;
    int age;
    char again;

    cout << "==============================" << endl;
    cout << " Welcome to the Info Program! " << endl;
    cout << "==============================" << endl;

    do {
        cout << "\nEnter your name: ";
        cin >> name;

        cout << "Enter your age: ";
        while (!(cin >> age)) {
            cout << "Invalid input! Please enter a number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "\n--------------------------------" << endl;
        cout << "Hello, " << name << "! You are " << age << " years old." << endl;
        if (age < 18)
            cout << "You are still a minor!" << endl;
        else if (age < 60)
            cout << "You're an adult — enjoy your life!" << endl;
        else
            cout << "You're wise and experienced!" << endl;
        cout << "--------------------------------\n" << endl;

        cout << "Would you like to enter another person? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "\nThank you for using the program. Goodbye!" << endl;
    return 0;
}
