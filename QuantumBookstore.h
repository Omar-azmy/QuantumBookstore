#ifndef QUANTUMBOOKSTORE_H
#define QUANTUMBOOKSTORE_H

#include <vector>
#include "Book.h"

class QuantumBookstore {
private:
    vector<Book*> inventory;

public:
    void addBook(Book* b);
    void removeOutdatedBooks(int currentYear, int outdatedYears);
    void buyBook(string isbn, int quantity, string email, string address);
    void printInventory();
};

#endif
