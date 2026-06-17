#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
    int id;
    string title;
    string author;
    bool isBorrowed;

    public:
        Book(int id, string title, string author)
            : id(id)
            , title(title)
            , author(author)
            , isBorrowed(false) {}
        
        int getId() const {
            return id;
        }

        string getTitle() const {
            return title;
        }

        string getAuthor() const {
            return author;
        }

        bool getIsBorrowed() const {
            return isBorrowed;
        }

        void display() const {
            cout << "\nBook ID: " << id;
            cout << "\nTitle: " << title;
            cout << "\nAuthor: " << author;
            cout << "\nStatus: " << (isBorrowed ? "Borrowed\n" : "Available\n");
        }

        void borrowBook() {
            if (isBorrowed) {
                cout << "\nBook has already been borrowed.\n";
            } else {
                isBorrowed = true;
            }
        }

        void returnBook() {
            if (isBorrowed) {
                isBorrowed = false;
            } else {
                cout << "\nBook has already been returned.\n";
            }
        }
};

class Library {
    vector<Book> books;

    public:
        void addBook(int id, string title, string author) {
            Book* book = findBookById(id);

            if (book == nullptr) {
                books.push_back(Book(id, title, author));
            } else {
                cout << "\nBook ID already exists.\n";
            }
        }

        void displayAllBooks() const {
            for (const Book& book : books) {
                book.display();
            }
        }

        void displayAvailableBooks() const {
            for (const Book& book : books) {
                if (!book.getIsBorrowed()) {
                    book.display();
                }
            }
        }

        void displayBorrowedBooks() const {
            for (const Book& book : books) {
                if (book.getIsBorrowed()) {
                    book.display();
                }
            }
        }

        void borrowBookById(int id) {
            Book* book = findBookById(id);

            if (book == nullptr) {
                cout << "\nBook ID " << id << " doesn't exist.\n";
            } else {
                book->borrowBook();
            }
        }

        void returnBookById(int id) {
            Book* book = findBookById(id);

            if (book == nullptr) {
                cout << "\nBook ID " << id << " doesn't exist.\n";
            } else {
                book->returnBook();
            }
        }

        Book* findBookById(int id) {
            for (Book& book : books) {
                if (book.getId() == id) {
                    return &book;
                }
            }

            return nullptr;
        }
};

int main() {

    Library library;
    library.addBook(1, "Clean Code", "Robert C. Martin");
    library.addBook(2, "The Pragmatic Programmer", "Andrew Hunt");
    library.addBook(3, "Effective C++", "Scott Meyers");

    library.addBook(3, "A Tale of Two Cities", "Charles Dickens");

    library.displayAllBooks();

    library.borrowBookById(2);

    library.borrowBookById(2);

    library.displayBorrowedBooks();

    library.returnBookById(2);

    library.returnBookById(2);

    library.displayAvailableBooks();

    library.borrowBookById(99);

    Book* book = library.findBookById(1);

    if (book == nullptr) {
        cout << "Book ID doesn't exist.";
    } else {
        book->display();
    }

    return 0;
}