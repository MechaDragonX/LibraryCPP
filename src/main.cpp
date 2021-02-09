#include <iostream>
#include <string>
#include <vector>
#include "book.hpp"
#include "call_number.hpp"
#include "../lib/json.hpp"
using namespace std;

int main() {
    // vector<string> cutNames = { "F", "Q" };
    // vector<int> cutIds = { 21, 64 };
    // CallNumber call(
    //         "PT",
    //         537,
    //         cutNames,
    //         cutIds,
    //         2010
    //     );
    CallNumber call(
            "PT",
            537,
            "F",
            21,
            2010
        );
    Book book(
            "978-3-16-148410-0",
            call,
            "Romanov",
            "A History of Russian Computing",
            "Moscow Company",
            560
        );
    
    cout << book.callNumber.fullCallNumber << endl;
}
