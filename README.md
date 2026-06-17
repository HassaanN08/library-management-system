# Library Management System

A console-based Library Management System built in C++ as part of a long-term software engineering portfolio. The project focuses on clean object-oriented design, class responsibility, vector-based data management, and safe handling of book borrowing and returning logic.

This is an early version of the project and will continue to grow with more features, better structure, file handling, user/member management, and eventually a cleaner multi-file architecture.

## Current Features

* Add books to the library
* Prevent duplicate book IDs
* Display all books
* Display available books
* Display borrowed books
* Borrow a book by ID
* Return a book by ID
* Handle invalid book IDs
* Search for a book by ID
* Track book availability status

## Current Project Structure

The current version is kept in a single C++ file while the core logic is being developed.

Main classes:

### Book

Represents a single book in the library.

Responsibilities:

* Store book ID, title, author, and borrowed status
* Display book details
* Handle borrowing and returning state
* Protect internal data using private members and public methods

### Library

Manages the collection of books.

Responsibilities:

* Store books using `std::vector<Book>`
* Add new books
* Prevent duplicate IDs
* Search books by ID
* Borrow and return books
* Display books based on status

## Concepts Practiced

This project is being built to strengthen core C++ and software design concepts, including:

* Classes and objects
* Encapsulation
* Constructors and member initializer lists
* Const member functions
* `std::vector`
* Passing by reference and const reference
* Pointers and `nullptr`
* Searching objects inside a vector
* Separating responsibilities between classes
* Keeping `main()` clean and readable

## Example Program Flow

The current version tests the system by:

1. Creating a library
2. Adding multiple books
3. Rejecting duplicate book IDs
4. Displaying all books
5. Borrowing a book by ID
6. Preventing the same book from being borrowed twice
7. Displaying borrowed books
8. Returning a book
9. Preventing the same book from being returned twice
10. Displaying available books
11. Handling invalid book IDs

## Planned Improvements

Future versions will include:

* Interactive console menu
* Better input validation
* Automatic book ID generation
* Member/user management
* Borrowing records linked to members
* File saving and loading
* Split code into `.h` and `.cpp` files
* Improved error handling
* Cleaner project structure
* README updates with screenshots and usage instructions

## Why This Project Exists

This project is part of my journey toward becoming a stronger C++ developer with a focus on clean software design and practical systems thinking. Instead of only learning C++ concepts in isolation, I am building this project incrementally and improving it through refactoring, code review, and feature expansion.

The goal is to grow this into a portfolio-ready C++ project that demonstrates object-oriented programming, data management, and clean project architecture.

## Technologies Used

* C++
* Standard Library
* `std::vector`
* Console input/output

## How to Run

Compile the project using a C++ compiler such as `g++`.

Example:

```bash
g++ main.cpp -o library-management-system
./library-management-system
```

On Windows, you can compile with:

```bash
g++ main.cpp -o library-management-system.exe
library-management-system.exe
```

## Status

Current version: Early development / v0

The current build contains the core book-management logic. More features and structural improvements will be added as the project develops.