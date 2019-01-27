#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED

#include <string>
#include <iostream>


class Books
{
    static int cnt;
    int id;
    std::string author;
    std::string title;
    std::string yearOfRealse;

public:
    Books();
    Books(std::string, std::string, std::string);
    void setAuthor(std::string author)                  {        this->author = author;                 };
    void setTitle(std::string title)                    {        this->title = title;                    };
    void setYearOfRealse(std::string yearOfRealse)      {        this->yearOfRealse = yearOfRealse;      };
    void printEverything();
    std::string getAuthor ()        const {    return author;          };
    std::string getTitile ()        const {    return title;           };
    std::string getYearOfRealse ()  const {    return yearOfRealse;    };
    int getIdOfTheBook()            const {    return id;              };
    static int getCounterValue ()         {    return cnt;             };


};


#endif // BOOK_H_INCLUDED
