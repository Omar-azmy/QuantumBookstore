#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
protected:
    string ISBN;
    string title;
    int year;
    double price;
    string author;

public:
    Book(string isbn, string t, int y, double p, string a)
        : ISBN(isbn), title(t), year(y), price(p), author(a) {}

    virtual void printDetails();
    string getISBN();
    int getYear();
    virtual double buy(int quantity, string email, string address) = 0;
};

#endif
