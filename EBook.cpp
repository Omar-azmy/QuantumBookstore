#include "EBook.h"
#include <iostream>
using namespace std;

EBook::EBook(string isbn, string t, int y, double p, string a, string ft)
    : Book(isbn, t, y, p, a), filetype(ft) {}

void EBook::printDetails() {
    Book::printDetails();
    cout << "Quantum book store - Filetype: " << filetype << endl;
}

double EBook::buy(int quantity, string email, string address) {
    cout << "Quantum book store - Sending ebook to " << email << endl;
    return price * quantity;
}
