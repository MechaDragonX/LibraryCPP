#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include "book.hpp"
#include "call_number.hpp"
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
    CallNumber call(
            "PT",
            537,
            "F",
            21,
            2010
        );
    Book book(
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
    
    cout << book.callNumber.fullCallNumber << endl;
}
