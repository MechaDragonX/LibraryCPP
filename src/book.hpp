#include <string>
#include "call_number.hpp"
using namespace std;

class Book {
    public:
        string isbn;
        CallNumber callNumber;

        string authorSurname;
        string title;
        string publisher;
        int publicationYear;
        int pageCount;
};
