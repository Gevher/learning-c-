#include "Libary.h"
#include <iostream>



Libary::Libary()
{
    this->maxAmountOfBooks = 10;
    this->bookList = new Books[maxAmountOfBooks];
    bookCount = 0;
}

Libary::Libary(int maxAmountOfBooks)
{
    this->maxAmountOfBooks = maxAmountOfBooks;
    this->bookList = new Books[maxAmountOfBooks];
    bookCount = 0;
}

void Libary::addBook(Books someBook)
{

    if(bookCount<maxAmountOfBooks)
        {
            bookList[bookCount] = someBook;
            std::cout << "book " << bookCount << " added" << std::endl;
        }

    else
        std::cout << "Too much books in the library" << std::endl;
    bookCount++;
}

Books Libary::getBook(int bookNumber)
{
    Books emptyBook;
    if (bookNumber<maxAmountOfBooks)
        return bookList[bookNumber];
    else
        {
            std::cout<< "Error" << std::endl;
            return emptyBook;
        }

}

void Libary::printLibary()
{
    for (int i = 0; i < (bookCount); i++)
        {
           std::cout << "Book no. " << i << " = ";
           bookList[i].printEverything();
        }
}

Libary::~Libary()
{
    delete bookList;
}
