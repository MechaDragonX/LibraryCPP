#include <string>
#include "book.hpp"
#include "call_number.hpp"
using namespace std;

Book::Book() {
    isbn = "";
    callNumber = CallNumber();
    authorSurname = "";
    title = "";
    publisher = "";
    publicationYear = 0;
    pageCount = 0;
}
Book::Book(string isbn_value, CallNumber call_number, string author_surname, string title_value, string publisher_value, int page_count) :
    isbn(isbn_value), callNumber(call_number), authorSurname(author_surname), title(title_value), publisher(publisher_value), pageCount(page_count) {
    setPublicationYear();
}

void Book::setPublicationYear() {
    publicationYear = callNumber.year;
}

const bool Book::operator<(const Book &other) {
    return callNumber < other.callNumber;
}
const bool Book::operator>(const Book &other) {
    return callNumber > other.callNumber;
}
const bool Book::operator==(const Book &other) {
    return callNumber == other.callNumber;
}
const bool Book::operator<=(const Book &other) {
    return callNumber <= other.callNumber;
}
const bool Book::operator>=(const Book &other) {
    return callNumber >= other.callNumber;
}
