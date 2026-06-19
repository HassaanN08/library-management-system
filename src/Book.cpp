#include <iostream>
#include <string>
#include "Book.h"
using namespace std;

Book::Book(int id, const string &title, const string &author)
            : id(id)
            , title(title)
            , author(author)
            , isBorrowed(false) {}

int Book::getId() const {
    return id;
}

string Book::getTitle() const {
    return title;
}

string Book::getAuthor() const {
    return author;
}

bool Book::getIsBorrowed() const {
    return isBorrowed;
}

void Book::display() const {
    cout << "\nBook ID: " << id;
    cout << "\nTitle: " << title;
    cout << "\nAuthor: " << author;
    cout << "\nStatus: " << (isBorrowed ? "Borrowed\n" : "Available\n");
}

void Book::borrowBook() {
    if (isBorrowed) {
        cout << "\nBook has already been borrowed.\n";
    } else {
        isBorrowed = true;
    }
}

void Book::returnBook() {
    if (isBorrowed) {
        isBorrowed = false;
    } else {
        cout << "\nBook has already been returned.\n";
    }
}