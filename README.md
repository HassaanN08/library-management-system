# Library Management System

A console-based Library Management System built in C++ as part of a long-term software engineering portfolio project.

The project focuses on object-oriented programming, clean class responsibility, vector-based data management, input handling, and interactive console-based user flows. This is an early version of the system and will continue to grow with better structure, file handling, member management, and persistent storage.

## Current Version

**Version:** v0.1
**Status:** Early development

This version includes the core book-management system and an interactive console menu.

## Features

* Add books through user input
* Prevent duplicate book IDs
* Display all books
* Display only available books
* Display only borrowed books
* Borrow a book by ID
* Return a book by ID
* Find and display a book by ID
* Handle invalid book IDs
* Basic numeric input validation
* Interactive menu loop
* Private book search logic inside the `Library` class

## Menu Options

The current program supports the following menu:

```text
Library Management System

1. Add book
2. Display all books
3. Display available books
4. Display borrowed books
5. Borrow book by ID
6. Return book by ID
7. Find book by ID
8. Exit
```

## Project Structure

The current version is kept in a single `main.cpp` file while the core logic is being developed.

Main components:

### Book

Represents a single book in the library.

Responsibilities:

* Store book ID, title, author, and borrowed status
* Display book details
* Track whether a book is available or borrowed
* Handle borrowing and returning state
* Protect internal data using private members and public methods

### Library

Manages the collection of books.

Responsibilities:

* Store books using `std::vector<Book>`
* Add new books
* Prevent duplicate book IDs
* Search for books internally
* Borrow and return books by ID
* Display books by status
* Expose safe public methods for menu actions

### Menu Functions

The program includes helper functions for console interaction, including:

* Displaying the menu
* Adding a book through user input
* Borrowing a book through user input
* Returning a book through user input
* Finding and displaying a book by ID

## Concepts Practiced

This project is being built to strengthen core C++ and software design concepts, including:

* Classes and objects
* Encapsulation
* Constructors and member initializer lists
* Const member functions
* `std::vector`
* Passing by reference and const reference
* Pointers and `nullptr`
* Private helper methods
* Searching objects inside a vector
* Separating class responsibility
* Interactive console menus
* Basic input validation
* Keeping `main()` cleaner and more readable

## Current Program Flow

The current version allows the user to:

1. Start the program
2. Choose an action from the menu
3. Add books by entering an ID, title, and author
4. Display books by availability status
5. Borrow and return books by ID
6. Search for a specific book by ID
7. Handle invalid book IDs
8. Exit the program cleanly

## Planned Improvements

Future versions will include:

* Cleaner reusable input validation helpers
* Automatic book ID generation
* Better handling for empty book lists
* Member/user management
* Borrowing records linked to members
* Due dates and return tracking
* File saving and loading
* Split code into `.h` and `.cpp` files
* Improved project structure
* Better error handling
* Unit tests
* Updated README with screenshots and usage examples

## Why This Project Exists

This project is part of my journey toward becoming a stronger C++ developer and building a serious software engineering portfolio.

Instead of only learning C++ concepts in isolation, I am building this project incrementally through real implementation, refactoring, and code review. The goal is to grow this into a clean portfolio-ready C++ project that demonstrates object-oriented programming, data management, console interaction, and maintainable software structure.

## Technologies Used

* C++
* Standard Library
* `std::vector`
* Console input/output

## How to Run

Compile the project using a C++ compiler such as `g++`.

### Linux / macOS

```bash
g++ main.cpp -o library-management-system
./library-management-system
```

### Windows

```bash
g++ main.cpp -o library-management-system.exe
library-management-system.exe
```

## Repository Status

This project is currently in active development.

The current release, **v0.1**, includes the first interactive version of the Library Management System. Future versions will continue improving the project structure and adding more realistic library-management features.