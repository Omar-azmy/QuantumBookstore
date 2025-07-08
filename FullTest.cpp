#include "FullTest.h"

void FullTest::runTest() {
    QuantumBookstore store;

    // Adding books
    store.addBook(new PaperBook("9780062316110", "The 7 Habits of Highly Effective People", 1989, 80, "Stephen Covey", 10));
    store.addBook(new EBook("9780062457738", "Principles: Life and Work", 2017, 60, "Ray Dalio", "PDF"));
    store.addBook(new ShowcaseBook("9780307465351", "The Lean Startup", 2011, 100, "Eric Ries"));

    // Printing inventory
    store.printInventory();

    // Buying books using correct ISBNs
    store.buyBook("9780062316110", 2, "omar@mail.com", "Cairo"); // PaperBook purchase
    store.buyBook("9780062457738", 1, "ahmed@mail.com", "Giza");  // EBook purchase
    store.buyBook("9780307465351", 1, "azmy@mail.com", "Alex");  // ShowcaseBook (not for sale)

    // Remove outdated books (older than 15 years)
    store.removeOutdatedBooks(2025, 15);

    // Printing updated inventory
    store.printInventory();
}
