#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int* createArray(int);
void swapTwoValues (int*, int*);
void printArray (int[], int);
void bubbleSort (int[], int, int);
void randomizeArray(int[], int);

int main ()
{
    int sizeOfArray;

    cout << "gib size" << endl;
    cin >> sizeOfArray;

    int* randomArray = createArray(sizeOfArray);

    randomizeArray(randomArray, sizeOfArray);
    bubbleSort(randomArray, sizeOfArray, 1);
    printArray(randomArray, sizeOfArray);
    delete[] randomArray;
    return 0;
}


int* createArray(int sizeOfArray)
{

    int* randomArray = new int[sizeOfArray];
    return randomArray;
}

void randomizeArray(int randomArray[], int sizeOfArray)
{


    srand(time(NULL));


        for(int i = 0; i < sizeOfArray; i++)
    {
        cout << "check[" << i << "]" << endl;
        randomArray[i] = rand();
        cout << randomArray[i] << endl;
    }
}
void swapTwoValues (int * a, int* b)
{
    cout << *a << " > " << *b << endl;
    int c;
    c = *b;
    *b = *a;
    *a = c;
    cout << *a << " < " << *b << endl;
}

void printArray(int randomArray[], int sizeOfArray)
{
    cout << "now dis" << endl;
    for (int i = 0; i< sizeOfArray; i++)
        cout << "Array [" << i << "] = " << randomArray[i] << endl;
}

void bubbleSort (int randomArray[], int sizeOfArray, int sortDirection)
{
    for (int i = 0; i < sizeOfArray; i++)
    {

        cout << "stone[" << i << "]" << endl;
        if (randomArray[i]>randomArray[i+1] && sortDirection == 1 && i!=(sizeOfArray-1))
        {
            swapTwoValues(&randomArray[i], &randomArray[i+1]);
            cout << randomArray[i] << " < " << randomArray[i+1] << endl;
        }
        cout << endl << endl;
    }
}
