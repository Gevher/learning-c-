#include <iostream>


using namespace std;

main ()
{
    char answer = 'Y';
    int i = 1, sum = 0;

    while (answer == 'Y' || answer == 'y' || answer == 'N' || answer == 'n' )
    {

        cout << "Current sum: " << sum << endl;
        cout << "Do you want add " << i << " to the sum?(Y/N)";
        cin >> answer;


        if(answer == 'N' || answer == 'n')
        {
            i++;
            continue;
        }


        sum = sum + i++;
    }
}
