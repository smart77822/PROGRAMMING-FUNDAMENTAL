#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int choice;
    double num1, num2;

    do {
        cout << "--- Simple Calculator ---" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Clear Screen" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }

        if (choice == 1) {
            cout << "Result: " << num1 + num2 << endl;
        } 
        else if (choice == 2) {
            cout << "Result: " << num1 - num2 << endl;
        } 
        else if (choice == 3) {
            cout << "Result: " << num1 * num2 << endl;
        } 
        else if (choice == 4) {
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
        } 
        else if (choice == 5) {
            cout << "Screen cleared." << endl;
            for(int i = 0; i < 50; i++) cout << endl;
        } 
        else if (choice == 6) {
            cout << "Exiting Calculator. Goodbye!" << endl;
        } 
        else {
            cout << "Invalid choice! Please try again." << endl;
        }

        cout << "-------------------------" << endl << endl;

    } while (choice != 6);

    return 0;
}