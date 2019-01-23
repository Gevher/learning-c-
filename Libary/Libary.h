#ifndef LIBARY_H_INCLUDED
#define LIBARY_H_INCLUDED
#include "book.h"


class Libary
{
private:
    Books books[5];
    int bookCount;
public:
    Libary();
    void addBook (Books);
    Books getBook(int);
};

#endif // LIBARY_H_INCLUDED
