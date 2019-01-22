#include <iostream>

using namespace std;

double minValue(double &arr[]);
double maxValue(double &arr1[]);


string quit;


main()
{

    while(quit[0] != 'N' || quit[0] != 'n')
    {
        int _size;
        cout << "Enter number of values to compare" << endl;
        cin >> _size;

        double values[_size];

        cout << "Thank you." << endl;

        for(int i = 0; i <= _size; i++)
        {
            cout << "Please enter value." << endl;
            cin >> values[i];
        }

        cout << "Minimal value: " <<minValue(&values) << endl;
        cout << "Maximal value: " <<maxValue(&values) << endl;
        cout << "Do you want to continue?(Y/N)" << endl;
        cin  >> quit;

    }


}


double minValue(double &arr[])
{

    int sizeOfValues = sizeof(arr)/sizeof(arr[0]);
    double currentValue = arr[0];

    for (int i = 1; i < sizeOfValues; i++)
    {
       if(currentValue > arr[i])
        currentValue = arr[i];
    }

    return currentValue;
}


double maxValue(double &arr1[])
{
    int sizeOfValues = sizeof(arr1)/sizeof(arr1[0]);
    double currentValue1 = arr1[0];

    for (int i = 1 ; i < sizeOfValues; i++)
    {
       if(currentValue1 < arr1[i])
        currentValue1 = arr1[i];
    }

    return currentValue1;
}
