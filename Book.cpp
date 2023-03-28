#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Book {
public:
    Book(const string& author, double price, const string& title, int book_number, int num_copies)
        : author_(author), price_(price), title_(title), book_number_(book_number), num_copies_(num_copies) {}

    void Insert() {
        // Insert a new book record into the database
        // (in this example, we just push_back() to a vector)
        book_list_.push_back(*this);
    }

    static void DisplayAll() {
        // Display a list of all books in the database
        for (const auto& book : book_list_) {
            cout << "Author: " << book.author_ << endl;
            cout << "Title: " << book.title_ << endl;
            cout << "Price: " << book.price_ << endl;
            cout << "Book number: " << book.book_number_ << endl;
            cout << "Number of copies: " << book.num_copies_ << endl;
            cout << endl;
        }
    }

private:
    string author_;
    double price_;
    string title_;
    int book_number_;
    int num_copies_;

    static vector<Book> book_list_;
};

vector<Book> Book::book_list_;

int main() {
    // Test the program
    Book b1("John Doe", 10.99, "The Great Gatsby", 12345, 3);
    b1.Insert();
    Book b2("Jane Smith", 8.99, "To Kill a Mockingbird", 67890, 2);
    b2.Insert();
    Book::DisplayAll();

    return 0;
}


