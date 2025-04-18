#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;

public:
    // Constructor
    Book(string t, string a) : title(t), author(a) {}

    // Getter methods
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
};

class Library {
private:
    static const int MAX_BOOKS = 100;
    Book* books[MAX_BOOKS];
    int numBooks;

public:
    // Constructor
    Library() : numBooks(0) {}

    // Method to add a book to the library
    void addBook(const string& title, const string& author) {
        if (numBooks < MAX_BOOKS) {
            books[numBooks] = new Book(title, author);
            numBooks++;
            cout << "Book '" << title << "' by " << author << " added to the library." << endl;
        } else {
            cout << "The library is full. Cannot add more books." << endl;
        }
    }

    // Method to remove a book from the library
    void removeBook(const string& title) {
        bool found = false;
        for (int i = 0; i < numBooks; ++i) {
            if (books[i]->getTitle() == title) {
                delete books[i];
                for (int j = i; j < numBooks - 1; ++j) {
                    books[j] = books[j + 1];
                }
                numBooks--;
                found = true;
                cout << "Book '" << title << "' removed from the library." << endl;
                break;
            }
        }
        if (!found) {
            cout << "Book '" << title << "' not found in the library." << endl;
        }
    }

    // Method to display all books in the library
    void displayBooks() const {
        if (numBooks == 0) {
            cout << "The library is empty." << endl;
        } else {
            cout << "Books in the library:" << endl;
            for (int i = 0; i < numBooks; ++i) {
                cout << "- " << books[i]->getTitle() << " by " << books[i]->getAuthor() << endl;
            }
        }
    }

    // Destructor to free memory
    ~Library() {
        for (int i = 0; i < numBooks; ++i) {
            delete books[i];
        }
    }
};

int main() {
    Library library;

    char choice;
    do {
        cout << "\nChoose an option:\n";
        cout << "1. Add a book\n";
        cout << "2. Remove a book\n";
        cout << "3. Display all books\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Clear the newline character from the input buffer

        switch (choice) {
            case '1': {
                string title, author;
                cout << "Enter the title of the book: ";
                getline(cin, title);
                cout << "Enter the author of the book: ";
                getline(cin, author);
                library.addBook(title, author);
                break;
            }
            case '2': {
                string title;
                cout << "Enter the title of the book to remove: ";
                getline(cin, title);
                library.removeBook(title);
                break;
            }
            case '3':
                library.displayBooks();
                break;
            case '4':
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != '4');

    return 0;
}
