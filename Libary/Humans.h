#ifndef HUMANS_H_INCLUDED
#define HUMANS_H_INCLUDED
#include <string>
#include "book.h"

class User
{
protected:
    std::string name;
    std::string lastName;
public:
    User(std::string, std::string);
    ~User() {};
    std::string getName()
    {
        return name;
    };
    std::string getLastName()
    {
        return lastName;
    };
};

class Borrower : public User
{
protected:
    int maxAmountOfBooks;
    int booksCount;
    Books * booksList;
public:
    Borrower(std::string, std::string, int);
    Borrower(std::string, std::string);
    ~Borrower();
    Borrower& operator = (Borrower &) = delete;
    void getBook(Books);
    Books returnBook(int);
    Books returnBook();
};

class Libarian : public Borrower
{

};

#endif // HUMANS_H_INCLUDED
