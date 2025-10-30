#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {
    string name;
    int age;
    char again;
    int peopleCount = 0;
    int totalAge = 0;

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

        peopleCount++;
        totalAge += age;

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

    cout << "\n========== SUMMARY ==========" << endl;
    cout << "You entered information for " << peopleCount << " people." << endl;

    if (peopleCount > 0) {
        double avgAge = static_cast<double>(totalAge) / peopleCount;
        cout << "Average age: " << avgAge << endl;
    } else {
        cout << "No data entered." << endl;
    }

    cout << "=============================" << endl;
    cout << "Program completed successfully!" << endl;
    cout << "Thank you for using the program. Goodbye!" << endl;

    return 0;
}