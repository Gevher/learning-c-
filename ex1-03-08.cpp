#include <iostream>
#include <cstdio>
#include <stdlib.h>

using namespace std;


  int  main ()
{
    int tabela[3][3];
    int x, y;

    tabela[0][0] = 1;
    tabela[0][1] = 2;
    tabela[0][2] = 3;
    tabela[1][0] = 4;
    tabela[1][1] = 5;
    tabela[1][2] = 6;
    tabela[2][0] = 7;
    tabela[2][1] = 8;
    tabela[2][2] = 9;


    cout << "Podaj x w zakresie od 1 do 3: " << endl;
    cin >> x;
        if (x<1 || x>3)
        {
          cout << "Niepoprawny X" << endl;
          return 0;
        }

    cout << "Podaj y w zakresie od 1 do 3: " << endl;
    cin >> y;
        if (y<1 || y>3)
        {
          cout << "Niepoprawny Y" << endl;
          return 0;
        }

    cout << "Wybrano komórkê o adresie [" << x <<"]["<< y <<"]. Jej wartoœæ to " << tabela[x-1][y-1] <<endl;
    return 0;
}
