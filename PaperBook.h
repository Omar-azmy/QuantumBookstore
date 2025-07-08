#ifndef PAPERBOOK_H
#define PAPERBOOK_H

#include "Book.h"

class PaperBook : public Book {
private:
    int stock;

public:
    PaperBook(string isbn, string t, int y, double p, string a, int s);
    void printDetails() override;
    double buy(int quantity, string email, string address) override;
};

#endif
