#include <iostream>
#include <cstdlib>
#include <time.h>
#include <limits>

using namespace std;


void swapTwoValues (int*, int*);
int intCheck ();

void printArray (int[], int);
int* createArray(int);
void randomizeArray(int[], int);

void bubbleSort (int[], int, int);
void selectionSort(int[], int, int);




int main ()
{
    int sizeOfArray, sortDirection;
    string sortSelection;
    bool valid= false;

    cout << "gib size" << endl;
    sizeOfArray = intCheck();

    int* randomArray = createArray(sizeOfArray);
    randomizeArray(randomArray, sizeOfArray);
    printArray(randomArray, sizeOfArray);


    cout << "gib sorting direction : \n(1 - incremental, 2 - decremental)" << endl;
    sortDirection = intCheck();

    cout << "gib sorting algorithm type : \n(S - selection sort, B - bubble sort)" << endl;
    cin >> sortSelection;

    switch (sortSelection[0])
    {
    case 's':
        {
            selectionSort(randomArray, sizeOfArray, sortDirection);
            break;
        }
    case 'S':
        {
            selectionSort(randomArray, sizeOfArray, sortDirection);
            break;
        }
    case 'b':
        {
           bubbleSort(randomArray, sizeOfArray, sortDirection);
            break;
        }
    case 'B':
        {
            bubbleSort(randomArray, sizeOfArray, sortDirection);
            break;
        }
    default :
        {
            bubbleSort(randomArray, sizeOfArray,sortDirection);
        }
    }

    printArray(randomArray, sizeOfArray);


    delete[] randomArray;
    return 0;
}

int intCheck()
{
    int intToCheck;
    bool valid = false;
        do
    {
        cin >> intToCheck;

        if (cin.good())
        {
            //everything went well, we'll get out of the loop and return the value
            return intToCheck;
            valid = true;
        }
        else
        {
            //something went wrong, we reset the buffer's state to good
            cin.clear();
            //and empty it
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "Invalid input; please re-enter." << endl;
        }
    } while (!valid);
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
        randomArray[i] = rand();
    }
}
void swapTwoValues (int * a, int* b)
{

    int c;
    c = *b;
    *b = *a;
    *a = c;
}

void printArray(int randomArray[], int sizeOfArray)
{
    for (int i = 0; i< sizeOfArray; i++)
        cout << "Array [" << i << "] = " << randomArray[i] << endl;
}

void bubbleSort (int randomArray[], int sizeOfArray, int sortDirection)
{
    int tempVar = sizeOfArray;

    do
    {
        for (int i = 0; i < tempVar; i++)
        {
            if (randomArray[i]>randomArray[i+1] && sortDirection == 1 && i!=(sizeOfArray-1))
            {
                swapTwoValues(&randomArray[i], &randomArray[i+1]);
            }
            else if (randomArray[i]<randomArray[i+1] && sortDirection == 2 && i!=(sizeOfArray-1))
            {
                swapTwoValues(&randomArray[i], &randomArray[i+1]);
            }
        }
    tempVar--;
    }
    while(tempVar != 0);

}

void selectionSort (int randomArray[], int sizeOfArray, int sortDirection)
{
    for(int i = 0; i < sizeOfArray; i++)
    {
        for (int j = 1; j < (sizeOfArray-i); j++)
        {
            if (randomArray[i]>randomArray[i+j] && sortDirection == 1 && i!=(sizeOfArray-1))
            {
                swapTwoValues(&randomArray[i], &randomArray[i+j]);
            }
            else if (randomArray[i]<randomArray[i+j] && sortDirection == 2 && i!=(sizeOfArray-1))
            {
                swapTwoValues(&randomArray[i], &randomArray[i+j]);
            }
            else if (sortDirection != 1 || sortDirection != 2)
            {
                cout << "Wrong direction, try again!" << endl;
            }

        }
    }

}
