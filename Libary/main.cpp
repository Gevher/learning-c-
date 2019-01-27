#include <iostream>
#include "book.h"
#include "Libary.h"

using namespace std;

int main()
{
    Libary lib1(15);
    Books books[15];

    const Books box("Wzorowy Geniek", "CZysta wóda", "1889");

    cout << Books::getCounterValue() << endl;
    cout << box.getAuthor() << endl;
    cout << box.getTitile() << endl;
    cout << box.getYearOfRealse() << endl;
    cout << box.getIdOfTheBook() << endl;
    return 0;
}
