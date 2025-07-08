#ifndef SHOWCASEBOOK_H
#define SHOWCASEBOOK_H

#include "Book.h"

class ShowcaseBook : public Book {
public:
    ShowcaseBook(string isbn, string t, int y, double p, string a);
    void printDetails() override;
    double buy(int quantity, string email, string address) override;
};

#endif
