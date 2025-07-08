#include "Book.h"
#include <iostream>
using namespace std;

void Book::printDetails() {
    cout << "Quantum book store - ISBN: " << ISBN << endl;
    cout << "Quantum book store - Title: " << title << endl;
    cout << "Quantum book store - Year: " << year << endl;
    cout << "Quantum book store - Price: " << price << endl;
    cout << "Quantum book store - Author: " << author << endl;
}

string Book::getISBN() { return ISBN; }
int Book::getYear() { return year; }
