#include <iostream>
#include <string>

using namespace std;

class Book
{
private:
    string title;
    string author;
    string isbn;

public:
    // Default constructor
    Book()
    {
        title = "";
        author = "";
        isbn = "";
    }

    // Constructor
    Book(string t, string a, string i)
    {
        title = t;
        author = a;
        isbn = i;
    }

    // Getter methods
    string getTitle()
    {
        return title;
    }

    string getAuthor()
    {
        return author;
    }

    string getISBN()
    {
        return isbn;
    }
};

class BookCollection
{
private:
    static const int MAX_BOOKS = 100; // Maximum number of books in the collection
    Book books[MAX_BOOKS];
    int numBooks; // Number of books currently in the collection

public:
    // Constructor
    BookCollection()
    {
        numBooks = 0;
    }

    // Method to add a book to the collection
    void addBook(Book b)
    {
        if (numBooks < MAX_BOOKS)
        {
            books[numBooks] = b;
            numBooks++;
        }
        else
        {
            cout << "Error: Maximum number of books reached." << endl;
        }
    }

    // Method to remove a book from the collection by ISBN
    void removeBook(string isbn)
    {
        for (int i = 0; i < numBooks; ++i)
        {
            if (books[i].getISBN() == isbn)
            {
                // Shift remaining books to fill the gap
                for (int j = i; j < numBooks - 1; ++j)
                {
                    books[j] = books[j + 1];
                }
                numBooks--;
                cout << "Book with ISBN " << isbn << " removed from the collection." << endl;
                return;
            }
        }
        cout << "Error: Book with ISBN " << isbn << " not found." << endl;
    }

    // Method to print all books in the collection
    void printBooks()
    {
        cout << "Books in Collection:" << endl;
        for (int i = 0; i < numBooks; ++i)
        {
            cout << "Title: " << books[i].getTitle() << ", Author: " << books[i].getAuthor() << ", ISBN: " << books[i].getISBN() << endl;
        }
    }
};

int main()
{
    // Create a BookCollection object
    BookCollection collection;

    char choice;
    do
    {
        string title, author, isbn;

        // Ask user for book details
        cout << "Enter Title: ";
        getline(cin, title);
        cout << "Enter Author: ";
        getline(cin, author);
        cout << "Enter ISBN: ";
        getline(cin, isbn);

        // Create a Book object and add it to the collection
        Book book(title, author, isbn);
        collection.addBook(book);

        cout << "Do you want to add another book? (y/n): ";
        cin >> choice;
        cin.ignore(); // Ignore the newline character in the input buffer
    } while (choice == 'y' || choice == 'Y');

    // Print all books in the collection
    collection.printBooks();

    // Remove a book from the collection
    string isbnToRemove;
    cout << "\nEnter the ISBN of the book you want to remove: ";
    getline(cin, isbnToRemove);
    collection.removeBook(isbnToRemove);

    // Print all books in the collection after removal
    collection.printBooks();

    return 0;
}
