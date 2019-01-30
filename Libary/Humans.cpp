#include "Humans.h"

User::User(std::string name, std::string lastName)
{
    this->name = name;
    this->lastName = lastName;
}


Borrower::Borrower(std::string name, std::string lastName) : User(name, lastName)
{
    this->maxAmountOfBooks = 3;
    this->booksList = new Books[maxAmountOfBooks];
    this->booksCount = 0;
}

Borrower::Borrower(std::string name, std::string lastName, int maxAmmountOfBooks) : User(name, lastName)
{
    this->maxAmountOfBooks = maxAmountOfBooks;
    this->booksList = new Books[maxAmountOfBooks];\
    this->booksCount = 0;
}

Borrower::~Borrower()
{
    delete booksList;
}

void Borrower::getBook(Books book)
{
    this->booksList[this->booksCount] = book;
    this->booksCount++;
}

Books Borrower::returnBook(int bookNr)
{

    if(bookNr>=0 && bookNr<= this->booksCount--) //TODO: ogarn¹æ to gówno
        return this->booksList[bookNr];
    else
        return this->booksList[this-> booksCount--];
}

Books Borrower::returnBook()
{
    return this->booksList[this->booksCount];
}
