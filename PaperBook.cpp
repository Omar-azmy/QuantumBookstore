#include "PaperBook.h"
#include <iostream>
using namespace std;

PaperBook::PaperBook(string isbn, string t, int y, double p, string a, int s)
    : Book(isbn, t, y, p, a), stock(s) {}

void PaperBook::printDetails() {
    Book::printDetails();
    cout << "Quantum book store - Stock: " << stock << endl;
}

double PaperBook::buy(int quantity, string email, string address) {
    if (stock >= quantity) {
        stock -= quantity;
        cout << "Quantum book store - Shipping to " << address << endl;
        return price * quantity;
    } else {
        cout << "Quantum book store - Not enough stock!" << endl;
        return 0;
    }
}
