#include <string>
#include "call_number.hpp"
using namespace std;

#ifndef BOOK_HPP
#define BOOK_HPP

class Book {
    public:
        string isbn;
        CallNumber callNumber;

        string authorSurname;
        string title;
        string publisher;
        int publicationYear;
        int pageCount;

        Book();
        Book(string isbn_value, CallNumber call_number, string author_surname, string title_value, string publisher_value, int page_count);

        void setPublicationYear();
};

#endif
