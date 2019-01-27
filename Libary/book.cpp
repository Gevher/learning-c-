#include "book.h"
#include <string>
#include <iostream>



    Books::Books()
    {

    }

    Books::Books(std::string author, std::string title, std::string yearOfRealse)
    {
        this->author = author;
        this->title = title;
        this->yearOfRealse = yearOfRealse;
    }
    void Books::setAuthor(std::string author)
    {
        this->author = author;
    }
    void Books::setTitle(std::string title)
    {
        this->title = title;
    }
    void Books::setYearOfRealse(std::string year )
    {
        this->yearOfRealse = year;
    }

    void Books::printEverything()
    {
        std::cout << author << " , " << title << " , " << yearOfRealse << std::endl;
    }
    std::string Books::getAuthor ()
    {
        return author;
    }
    std::string Books::getTitile ()
    {
        return title;
    }
    std::string Books::getYearOfRealse ()
    {
        return yearOfRealse;
    }


