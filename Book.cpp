#include <iostream>
#include <vector>
#include <string>

class book {
private:
    std::string author;
    double price;
    std::string title;
    int book_number;
    int num_copies;
public:
    book(std::string a, double p, std::string t, int bn, int nc) : author(a), price(p), title(t), book_number(bn), num_copies(nc) {}

    std::string get_author() const {
        return author;
    }

    double get_price() const {
        return price;
    }

    std::string get_title() const {
        return title;
    }

    int get_book_number() const {
        return book_number;
    }

    int get_num_copies() const {
        return num_copies;
    }

    void set_num_copies(int nc) {
        num_copies = nc;
    }

    void print() const {
        std::cout << "Book number: " << book_number << ", title: " << title << ", author: " << author << ", price: " << price << ", copies: " << num_copies << std::endl;
    }
};

class book_database {
private:
    std::vector<book> books;
public:
    void add_book(const book& b) {
        books.push_back(b);
    }

    void display_books() const {
        for (const auto& b : books) {
            b.print();
        }
    }
};

int main() {
    book_database db;
    db.add_book(book("Sepherene", 8.50, "Disequilibrium", 1, 10));
    db.add_book(book("Lauren Kate", 8.99, "Fallen", 2, 15));
    db.add_book(book("Dan Brown", 8.99, "Inferno", 3, 18));
    db.display_books();
    return 0;
}


