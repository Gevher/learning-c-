#include <iostream>
#include <cstdlib>
#include <limits>
#include <limits.h>

using namespace std;
void setValue (int &);

int main ()
{
    int a;

    cout << "Set value : " << endl;
    cin  >> a;
    cout << a << endl;
    setValue(a);
    cout << a << endl;

}

void setValue(int &x)
{
    cout << "Set value 2 :" << endl;
    cin >> x;
}
