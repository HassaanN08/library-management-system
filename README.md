# Library Management System

A console-based Library Management System built in C++ as part of a long-term software engineering portfolio project.

The project focuses on object-oriented programming, class responsibility, multi-file project structure, vector-based data management, input handling, and interactive console-based user flows.

This project is an early C++ foundation project and is being built incrementally through implementation, refactoring, and code review.

## Current Version

**Version:** v0.2
**Status:** Foundation project complete

This version includes the core book-management system, an interactive console menu, basic input handling, and a multi-file C++ structure.

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
* Multi-file project structure using `.h` and `.cpp` files

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

```text
library-management-system/
├── Book.h
├── Book.cpp
├── Library.h
├── Library.cpp
├── main.cpp
├── README.md
└── .gitignore
```

## Main Components

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

### main.cpp

Handles the console interface.

Responsibilities:

* Display the menu
* Accept user input
* Call public `Library` methods
* Keep the application running until the user exits

## Concepts Practiced

This project was built to strengthen core C++ and software design concepts, including:

* Classes and objects
* Encapsulation
* Constructors and member initializer lists
* Const member functions
* Header files and implementation files
* Multi-file C++ project structure
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

## How to Run

Compile the project using a C++ compiler such as `g++`.

### Linux / macOS

```bash
g++ main.cpp Book.cpp Library.cpp -o library-management-system
./library-management-system
```

### Windows

```bash
g++ main.cpp Book.cpp Library.cpp -o library-management-system.exe
library-management-system.exe
```

## Example Usage

After running the program, the user can add books, borrow books, return books, search for books, and display books based on availability.

Example actions:

```text
1. Add book
5. Borrow book by ID
6. Return book by ID
7. Find book by ID
```

The system prevents duplicate book IDs and displays clean messages when a book does not exist or has already been borrowed/returned.

## Planned Improvements

This project is currently frozen as a C++ foundation project. Future improvements may include:

* Cleaner reusable input validation helpers
* Automatic book ID generation
* Better handling for empty book lists
* File saving and loading
* Unit tests
* CMake support
* Cleaner console UI
* More advanced library features such as members and borrowing records

## Why This Project Exists

This project is part of my journey toward becoming a stronger C++ developer and building a serious software engineering portfolio.

Instead of only learning C++ concepts in isolation, I built this project incrementally through real implementation, refactoring, and review. The goal was to practice object-oriented programming, data management, console interaction, multi-file structure, and maintainable C++ design.

This project now serves as my C++ foundation project before moving into more automotive-focused C++ portfolio projects.

## Technologies Used

* C++
* Standard Library
* `std::vector`
* Console input/output

## Repository Status

This project is currently at **v0.2**.

The current release includes the first multi-file interactive version of the Library Management System. The project is stable enough to serve as a foundation portfolio project and may receive small improvements later.