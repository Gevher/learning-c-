#include "Libary.h"
#include <iostream>

Libary::Libary()
{
    this->bookCount = 0;
}

void Libary::addBook(Books someBook)
{
    this->bookCount++;

    if(this->bookCount<5)
        this->books[0] = someBook; // do zmiany!!!
    else
        std::cout << "Too much books in the libary" << std::endl;
}

Books Libary::getBook(int bookNumber)
{
    return books[bookNumber];
}
