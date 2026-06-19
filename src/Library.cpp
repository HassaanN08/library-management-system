#include <iostream>
#include <string>
#include <vector>
#include "Library.h"
#include "Book.h"
using namespace std;

Book* Library::findBookById(int id) {
    for (Book& book : books) {
        if (book.getId() == id) {
            return &book;
        }
    }

    return nullptr;
}


bool Library::addBook(int id, string title, string author) {
    Book* book = findBookById(id);

    if (book == nullptr) {
        books.push_back(Book(id, title, author));
        return true;
    } else {
        cout << "\nBook ID already exists.\n";
        return false;
    }
}

void Library::displayAllBooks() const {
    for (const Book& book : books) {
        book.display();
    }
}

void Library::displayAvailableBooks() const {
    for (const Book& book : books) {
        if (!book.getIsBorrowed()) {
            book.display();
        }
    }
}

void Library::displayBorrowedBooks() const {
    for (const Book& book : books) {
        if (book.getIsBorrowed()) {
            book.display();
        }
    }
}

bool Library::borrowBookById(const int& id) {
    Book* book = findBookById(id);

    if (book == nullptr) {
        cout << "\nBook ID " << id << " doesn't exist.\n";
        return false;
    } else {
        if (book->getIsBorrowed()) {
            book->borrowBook();
            return false;
        } else {
            book->borrowBook();
            return true;
        }
    }
}

bool Library::returnBookById(const int& id) {
    Book* book = findBookById(id);

    if (book == nullptr) {
        cout << "\nBook ID " << id << " doesn't exist.\n";
        return false;
    } else {
        if (!book->getIsBorrowed()) {
            book->returnBook();
            return false;
        } else {
            book->returnBook();
            return true;
        }
    }
}

bool Library::displayBookById(const int& id) {
    Book* book = findBookById(id);

    if (book == nullptr) {
        cout << "\nBook ID " << id << " doesn't exist.\n";
        return false;
    } else {
        book->display();
        return true;
    }
}