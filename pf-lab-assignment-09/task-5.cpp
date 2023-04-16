#include <iostream>
#include <string>
#include <vector>
using namespace std;

// define the Book structure
struct Book
{
    int accession_number;
    string author_name;
    string book_title;
    int num_copies;
    int num_issued;
};

// function to display book information
void displayBook(const Book &book)
{
    cout << "Accession number: " << book.accession_number << endl;
    cout << "Author name: " << book.author_name << endl;
    cout << "Book title: " << book.book_title << endl;
    cout << "Number of copies: " << book.num_copies << endl;
    cout << "Number issued: " << book.num_issued << endl;
}

// function to add a new book to the library
void addBook(vector<Book> &library)
{
    Book new_book;
    cout << "Enter the accession number: ";
    cin >> new_book.accession_number;
    cout << "Enter the author name: ";
    cin.ignore();
    getline(cin, new_book.author_name);
    cout << "Enter the book title: ";
    getline(cin, new_book.book_title);
    cout << "Enter the number of copies: ";
    cin >> new_book.num_copies;
    new_book.num_issued = 0;
    library.push_back(new_book);
    cout << "Book added successfully!" << endl;
}

// function to display all books by a particular author
void displayBooksByAuthor(const vector<Book> &library, const string &author_name)
{
    bool found = false;
    for (const Book &book : library)
    {
        if (book.author_name == author_name)
        {
            displayBook(book);
            found = true;
        }
    }
    if (!found)
    {
        cout << "No books found by author " << author_name << endl;
    }
}

// function to display the number of books with a particular title
void displayNumBooksWithTitle(const vector<Book> &library, const string &book_title)
{
    int count = 0;
    for (const Book &book : library)
    {
        if (book.book_title == book_title)
        {
            count += book.num_copies;
        }
    }
    cout << "Number of books with title " << book_title << ": " << count << endl;
}

// function to display the total number of books in the library
void displayTotalNumBooks(const vector<Book> &library)
{
    int count = 0;
    for (const Book &book : library)
    {
        count += book.num_copies;
    }
    cout << "Total number of books in the library: " << count << endl;
}

// function to issue a book
void issueBook(vector<Book> &library)
{
    int accession_number;
    cout << "Enter the accession number of the book to issue: ";
    cin >> accession_number;
    bool found = false;
    for (Book &book : library)
    {
        if (book.accession_number == accession_number)
        {
            if (book.num_issued < book.num_copies)
            {
                book.num_issued++;
                cout << "Book issued successfully!" << endl;
            }
            else
            {
                cout << "All copies of this book are already issued." << endl;
            }
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Book not found with accession number " << accession_number << endl;
    }
}

int main()
{
    vector<Book> library = {
        {1001, "George Orwell", "1984", 3},
        {1002, "J.K. Rowling", "Harry Potter and the Philosopher's Stone", 5},
        {1003, "F. Scott Fitzgerald", "The Great Gatsby", 2}};

    int choice;
    do
    {
        cout << "Library Management System" << endl;
        cout << "------------------------" << endl;
        cout << "1. Display book information" << endl;
        cout << "2. Add a new book" << endl;
        cout << "3. Display all books by an author" << endl;
        cout << "4. Display the number of books of a particular title" << endl;
        cout << "5. Display the total number of books in the library" << endl;
        cout << "6. Issue a book" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int accession_number;
            cout << "Enter accession number: ";
            cin >> accession_number;

            bool found = false;
            for (const Book &book : library)
            {
                if (book.accession_number == accession_number)
                {
                    displayBook(book);
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "Book with accession number " << accession_number << " not found." << endl;
            }
            break;
        }
        case 2:
        {
            addBook(library);
            break;
        }
        case 3:
        {
            string author_name;
            cout << "Enter author name: ";
            cin >> author_name;
            displayBooksByAuthor(library, author_name);
            break;
        }
        case 4:
        {
            string book_title;
            cout << "Enter book title: ";
            cin >> book_title;
            displayNumBooksWithTitle(library, book_title);
            break;
        }
        case 5:
        {
            displayTotalNumBooks(library);
            break;
        }
        case 6:
        {
            issueBook(library);
            break;
        }
        case 0:
        {
            cout << "Exiting program." << endl;
            break;
        }
        default:
        {
            cout << "Invalid choice. Please enter a number between 0 and 6." << endl;
            break;
        }
        }

        cout << endl;
    } while (choice != 0);

    return 0;
}