#include <iostream>
#include "book.h"
#include "Libary.h"

using namespace std;

int main()
{
    Books book1, book2;
    Libary libary1;

    book1.setAuthor("Dupa");
    book1.setTitle("Krawê¿nik");
    book1.setYearOfRealse("1889");

    libary1.addBook(book1);

    book2 = libary1.getBook(0);
    cout << book2.getAuthor() << " , " << book2.getTitile() << " , " << book2.getYearOfRealse() << endl;
    return 0;
}
