#ifndef LIBARY_H_INCLUDED
#define LIBARY_H_INCLUDED
#include "book.h"


class Libary
{
private:
    int maxAmountOfBooks;
    int bookCount;
    Books * bookList;
public:
    Libary();
    Libary(int);
    void addBook (Books);
    Books getBook(int);
    void printLibary();
    ~Libary();
};

#endif // LIBARY_H_INCLUDED
