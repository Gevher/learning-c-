#include <iostream>
#include "book.h"
#include "Libary.h"

using namespace std;

int main()
{
    const Books bok1("Wzorowy Geniek", "CZysta wóda", "1889");
    const Books bok2("Tomasz Omasta", "Niesamowita potęga moich mięśni", "2019");
    const Books bok3("Brajan Kruger", "Polska w roku 2100", "2077");
    const Books bok4 = bok3;
    const Books bok5 = bok3;



    bok1.printEverything();
    bok2.printEverything();
    bok3.printEverything();
    bok4.printEverything();
    bok5.printEverything();

    return 0;
}
