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
    void setAuthor(std::string );
    void setTitle(std::string );
    void setYearOfRealse(std::string );
    std::string getAuthor ();
    std::string getTitile ();
    std::string getYearOfRealse ();
};


#endif // BOOK_H_INCLUDED
