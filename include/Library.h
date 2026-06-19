#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Book.h"

class Library {
    std::vector<Book> books;

    Book* findBookById(int id);

    public:
        bool addBook(int id, std::string title, std::string author);

        void displayAllBooks() const;

        void displayAvailableBooks() const;

        void displayBorrowedBooks() const;

        bool borrowBookById(const int& id);

        bool returnBookById(const int& id);

        bool displayBookById(const int& id);
};