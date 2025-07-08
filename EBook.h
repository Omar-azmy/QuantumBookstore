#ifndef EBOOK_H
#define EBOOK_H

#include "Book.h"

class EBook : public Book {
private:
    string filetype;

public:
    EBook(string isbn, string t, int y, double p, string a, string ft);
    void printDetails() override;
    double buy(int quantity, string email, string address) override;
};

#endif
