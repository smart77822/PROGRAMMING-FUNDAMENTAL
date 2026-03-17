#include <iostream>
#include <string>

using namespace std;

int main() {
    int choice;
    string bookName;
    string allBooks = "";

    do {
        cout << "--- Library System ---" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. View Book" << endl;
        cout << "3. Borrow Book" << endl;
        cout << "4. Issue Book" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter book name: ";
            cin >> bookName;
            allBooks += bookName + "\n";
            cout << "You added a book: " << bookName << endl;
        } 
        else if (choice == 2) {
            if (allBooks == "") {
                cout << "No books available in the library." << endl;
            } else {
                cout << "List of Books:" << endl;
                cout << allBooks;
            }
        } 
        else if (choice == 3) {
            cout << "You selected: Borrow Book." << endl;
        } 
        else if (choice == 4) {
            cout << "You selected: Issue Book." << endl;
        } 
        else if (choice == 5) {
            cout << "Exiting Library System. Goodbye!" << endl;
        } 
        else {
            cout << "Invalid choice! Please try again." << endl;
        }

        cout << endl;

    } while (choice != 5);

    return 0;
}