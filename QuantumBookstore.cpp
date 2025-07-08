#include "QuantumBookstore.h"
#include <iostream>
using namespace std;

void QuantumBookstore::addBook(Book* b) {
    inventory.push_back(b);
}

void QuantumBookstore::removeOutdatedBooks(int currentYear, int outdatedYears) {
    vector<Book*> updatedInventory;
    for (Book* b : inventory) {
        if (currentYear - b->getYear() <= outdatedYears) {
            updatedInventory.push_back(b);
        } else {
            cout << "Quantum book store - Removed outdated book: " << b->getISBN() << endl;
        }
    }
    inventory = updatedInventory;
}

void QuantumBookstore::buyBook(string isbn, int quantity, string email, string address) {
    for (Book* b : inventory) {
        if (b->getISBN() == isbn) {
            double paid = b->buy(quantity, email, address);
            cout << "Quantum book store - Paid amount: " << paid << endl;
            return;
        }
    }
    cout << "Quantum book store - Book not found!" << endl;
}

void QuantumBookstore::printInventory() {
    for (Book* b : inventory) {
        b->printDetails();
        cout << "------------------------" << endl;
    }
}
