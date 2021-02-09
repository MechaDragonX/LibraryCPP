#include <iostream>
#include "call_number.hpp"
#include "book.hpp"
#include "../lib/json.hpp"
using namespace std;

int main() {
    Book book = Book(
            "978-3-16-148410-0",
            CallNumber(
                "PT",
                537,
                { "F", "Q" },
                { 21, 64 },
                2010
            ),
            "Romanov",
            "A History of Russian Computing",
            "Moscow Company",
            560
        );
    
    cout << book.callNumber.toString() << endl;
}
