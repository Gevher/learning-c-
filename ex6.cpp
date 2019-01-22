#include <iostream>

using namespace std;

main()
{
    int ch_nr;


    cout << "how many chars?" << endl;
    cin  >> ch_nr;

    char *ch = new char[ch_nr];


    for(int i = 0; i<ch_nr ; i++)
    {
        cout << "enter " << (i+1) << " number" << endl;
        cin >> ch[i];
    }

    cout << "Printing output" << endl;

    for (int i = 0; i< ch_nr ; i++)
        cout << (i+1) << ": " << ch[i] << endl;


    cout << "string: " << ch << endl;




    delete ch;
    return 0;
}
