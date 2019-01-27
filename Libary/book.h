#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED

#include <string>


class Books
{
private:
    std::string author;
    std::string title;
    std::string yearOfRealse;
public:
    Books();
    Books(std::string, std::string, std::string);
    void setAuthor(std::string );
    void setTitle(std::string );
    void setYearOfRealse(std::string );
    void printEverything();
    std::string getAuthor ();
    std::string getTitile ();
    std::string getYearOfRealse ();
};


#endif // BOOK_H_INCLUDED
