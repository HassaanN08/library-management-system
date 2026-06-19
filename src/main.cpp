#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include "Library.h"
using namespace std;

void displayMenu() {
    cout << "\n1. Add book\n" << "2. Display all books\n" << "3. Display available books\n" << "4. Display borrowed books\n" << "5. Borrow book by ID\n" << "6. Return book by ID\n" << "7. Find book by ID\n" << "8. Exit\n";
    cout <<"\nChoose an option: ";
}

void clearLine() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void addBookMenu(Library& library) {
    int id;
    string title;
    string author;

    cout << "\nEnter Book ID: ";
    cin >> id;
    while (cin.fail()) {
        clearLine();
        cout << "\nPlease type in a number for the id, not characters. Or enter -1 to go back to the menu: ";
        cin >> id;
        
        if (id == -1) return;
    }
    cout << "Enter Book title: ";
    getline(cin >> ws, title);
    cout << "Enter Author's name: ";
    getline(cin >> ws, author);

    bool added = library.addBook(id, title, author);

    while (!added) {
        cout <<"Please enter a valid book id or enter -1 to go back to the menu: ";
        cin >> id;

        while (cin.fail()) {
            clearLine();
            cout << "\nPlease type in a number for the id, not characters. Or enter -1 to go back to the menu: ";
            cin >> id;
        }

        if (id == -1) {
            return;
        } else {
            added = library.addBook(id, title, author);
        }
    }
}

void borrowBookMenu(Library& library) {
    int id;

    cout << "Enter Book ID to borrow: ";

    cin >> id;

    while (cin.fail()) {
        clearLine();
        cout << "\nPlease type in a number for the id, not characters: ";
        cin >> id;
    }

    bool valid = library.borrowBookById(id);

    while (!valid) {
        cout <<"Please enter a valid book id or enter -1 to go back to the menu: ";
        cin >> id;

        while (cin.fail()) {
            clearLine();
            cout << "\nPlease type in a number for the id, not characters. Or enter -1 to go back to the menu: ";
            cin >> id;
        }

        if (id == -1) {
            return;
        } else {
            valid = library.borrowBookById(id);
        }
    }
}

void returnBookMenu(Library& library) {
    int id;

    cout << "Enter Book ID to return: ";
    cin >> id;

    while (cin.fail()) {
        clearLine();
        cout << "\nPlease type in a number for the id, not characters: ";
        cin >> id;
    }

    bool valid = library.returnBookById(id);

    while (!valid) {
        cout <<"Please enter a valid book id or enter -1 to go back to the menu: ";
        cin >> id;

        while (cin.fail()) {
            clearLine();
            cout << "\nPlease type in a number for the id, not characters. Or enter -1 to go back to the menu: ";
            cin >> id;
        }

        if (id == -1) {
            return;
        } else {
            valid = library.returnBookById(id);
        }
    }
}

void displayBookMenu(Library& library) {
    int id;

    cout << "Enter Book ID to show: ";

    cin >> id;

    while (cin.fail()) {
        clearLine();
        cout << "\nPlease type in a number for the id, not a character.";
        cin >> id;
    }

    bool valid = library.displayBookById(id);

    while (!valid) {
        cout <<"Please enter a valid book id or enter -1 to go back to the menu: ";
        cin >> id;

        while (cin.fail()) {
            clearLine();
            cout << "\nPlease type in a number for the id, not a character. Or enter -1 to go back to the menu: ";
            cin >> id;
        }

        if (id == -1) {
            return;
        } else {
            valid = library.displayBookById(id);
        }
    }
}
 

int main() {

    Library library;

    int option;

    cout << "Library Management System\n";

    displayMenu();

    cin >> option;

    while (option != 8) {
        if (cin.fail()) {
            clearLine();
        }
        if (option <= 0 || option > 8) {
            cout << "\nPlease choose a valid option: ";
            cin >> option;
        } else {
            switch(option) {
                case 1:
                    addBookMenu(library);
                    break;
                case 2:
                    library.displayAllBooks();
                    break;
                case 3:
                    library.displayAvailableBooks();
                    break;
                case 4:
                    library.displayBorrowedBooks();
                    break;
                case 5:
                    borrowBookMenu(library);
                    break;
                case 6:
                    returnBookMenu(library);
                    break;
                case 7:
                    displayBookMenu(library);
                    break;
            }

            displayMenu();
            cin >> option;
        }
    }

    return 0;
}