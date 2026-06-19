#pragma once
#include <iostream>
#include <string>

class Book {
    int id;
    std::string title;
    std::string author;
    bool isBorrowed;

    public:
        Book(int id, const std::string& title, const std::string& author);
        
        int getId() const;

        std::string getTitle() const;

        std::string getAuthor() const;

        bool getIsBorrowed() const;

        void display() const;

        void borrowBook();

        void returnBook();
};