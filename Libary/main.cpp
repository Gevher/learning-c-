#include <iostream>
#include "book.h"
#include "Libary.h"

using namespace std;

int main()
{
    Libary lib1(15);
    Books books[15];

    for(int i = 0; i<15; i++)
        {

            books[i].setAuthor(" jebać");
            books[i].setTitle(" policje");
            books[i].setYearOfRealse("997");
        }


    cout<< "hi1" << endl;
    for(int i=0; i < 15; i++)

        {
            cout<< "hi2" << endl;
            lib1.addBook(books[i]);

        }

    for(int i = 0; i< 15; i++)
        {
            Books tempBook1;
            tempBook1 = lib1.getBook(i);
            tempBook1.printEverything();
        }

    lib1.printLibary();

    return 0;
}
