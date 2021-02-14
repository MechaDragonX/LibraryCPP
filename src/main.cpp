#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include "book.hpp"
#include "call_number.hpp"
#include "catalog.hpp"
using namespace std;

int main() {
    // vector<string> cutNames = { };
    // cutNames.push_back("F");
    // cutNames.push_back("Q");
    // vector<int> cutIds = { };
    // cutIds.push_back(21);
    // cutIds.push_back(64);
    // CallNumber call(
    //         "PT",
    //         537,
    //         &cutNames,
    //         &cutIds,
    //         2010
    //     );
    Book book1(
            "978-3-16-148410-0",
            CallNumber(
                "PT",
                537,
                "F",
                21,
                2010
            ),
            "Romanov",
            "A History of Russian Computing",
            "Moscow Company",
            560
        );
    
    Book book2(
            "973-2-43-810267-1",
            CallNumber(
                "ML",
                881,
                "D",
                2,
                1988
            ),
            "Vascovitch",
            "A book",
            "A Company",
            347
        );

    cout << "Book 1: " + book1.callNumber.fullCallNumber << endl;
    cout << "Book 2: " + book2.callNumber.fullCallNumber << endl;
    bool op = book1 < book2;
    cout << op << endl;
}
