#include "book.h"
#include <string>

    void Books::setAuthor(std::string author)
    {
        this->author = author;
    };
    void Books::setTitle(std::string title)
    {
        this->title = title;
    };
    void Books::setYearOfRealse(std::string year )
    {
        this->yearOfRealse = year;
    };
    std::string Books::getAuthor ()
    {
        return author;
    };
    std::string Books::getTitile ()
    {
        return title;
    };
    std::string Books::getYearOfRealse ()
    {
        return yearOfRealse;
    };
