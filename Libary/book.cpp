#include "book.h"

    int Books::cnt = 0;

    Books::Books()
    {
        id = cnt;
        cnt++;
    }

    Books::Books(std::string author, std::string title, std::string yearOfRealse)
    {

        this->author = author;
        this->title = title;
        this->yearOfRealse = yearOfRealse;
        id = cnt;
        cnt++;
    }

    void Books::printEverything()
    {
        std::cout << author << " , " << title << " , " << yearOfRealse << std::endl;
    }



