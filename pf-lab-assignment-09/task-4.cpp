#include <iostream>
#include <string>
using namespace std;

struct Book {
    int accession_number;
    string author_name;
    string book_title;
    bool is_issued;
};

int main() {
    const int MAX_BOOKS = 3;
    Book library[MAX_BOOKS] = {
        { 1001, "George Orwell", "1984", false },
        { 1002, "J.K. Rowling", "Harry Potter and the Philosopher's Stone", true },
        { 1003, "F. Scott Fitzgerald", "The Great Gatsby", false }
    };

    // print all the book data
    for (int i = 0; i < MAX_BOOKS; i++) {
        cout << "Book " << i+1 << ":" << endl;
        cout << "Accession number: " << library[i].accession_number << endl;
        cout << "Author name: " << library[i].author_name << endl;
        cout << "Book title: " << library[i].book_title << endl;
        cout << "Is issued: " << (library[i].is_issued ? "Yes" : "No") << endl;
        cout << endl;
    }

    return 0;
}