#include "ShowcaseBook.h"
#include <iostream>
using namespace std;

ShowcaseBook::ShowcaseBook(string isbn, string t, int y, double p, string a)
    : Book(isbn, t, y, p, a) {}

void ShowcaseBook::printDetails() {
    Book::printDetails();
    cout << "Quantum book store - This book is for showcase only" << endl;
}

double ShowcaseBook::buy(int quantity, string email, string address) {
    cout << "Quantum book store - Cannot buy showcase book!" << endl;
    return 0;
}
