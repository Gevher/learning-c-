#include <iostream>
#include <stdlib.h>

using namespace std;

int* createArray(int);
void swapTwoValues (int*, int*);
void fillArrayWithValues(int[], int);
void printArrayValues (int[], int);
void selectionSort (int[], int, int);
void bubbleSort(int[], int, int);
void quickSort(int[], int, int);

int main ()
{
    int arraySize, direction;
    int* a = createArray(arraySize);
    char choice;

    cout << "Choose size of array : " << endl;
    cin >> arraySize;
    fillArrayWithValues(a, arraySize);
    cout << "Choose sorting algorithm :" << endl;
    cin >> choice;
    cout << "Choose direction :" << endl;
    cin >> direction;

    switch (choice)
        {
        case 'b':
        {
            bubbleSort(a, arraySize, direction);
            break;
        }
        case 's':
        {
            selectionSort(a, arraySize, direction);
            break;
        }
        case 'c' :
        {
            quickSort(a, arraySize, direction);
            break;
        }
        default:
        {
            bubbleSort(a, arraySize, direction);
        }

        }


    printArrayValues(a, arraySize);

    return 0;
}

int* createArray(int arraySize)
{
    int* newArray = new int[arraySize];

    return newArray;
}

void swapTwoValues (int* a, int* b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

void fillArrayWithValues (int emptyArray[], int arraySize)
{
    for(int i = 0; i < arraySize; i++)
        {
            cout << "Input " << (i+1) << " element of array :" << endl;
            cin >> emptyArray[i];
        }
}

void printArrayValues (int arrayToPrint[], int arraySize)
{
    for(int i = 0; i < arraySize; i++)
        {
            cout << "Array[" << i << "] = " << arrayToPrint[i] << endl;
        }
}

void selectionSort (int filledArray[], int arraySize, int direction)
{
    for (int i = 0; i < arraySize; i++ )
        {
            for (int j = 0; j < arraySize; j++)
                {
                    if (filledArray[i]<filledArray[j] && direction== 1)
                        swapTwoValues(filledArray+i, filledArray+j);
                    if (filledArray[i]>filledArray[j] && direction==2)
                        swapTwoValues(filledArray+i, filledArray+j);
                }
        }
}


void bubbleSort (int filledArray[], int arraySize, int direction)
{
    int index = arraySize;

    while(index-- >0)
        {
            for(int i = 0; i < (arraySize-1); i++ )
                {
                    if (filledArray[i]<filledArray[i+1] && direction==1)
                        swapTwoValues(filledArray+i, filledArray+(i+1));
                    if (filledArray[i]>filledArray[i+1] && direction==2)
                        swapTwoValues(filledArray+i, filledArray+(i+1));
                }
        }
}


void quickSort (int filledArray[], int arraySize, int direction)
{
    int rightIndex = 0, leftIndex = arraySize, mainDividePosition = 0, dividePosition = arraySize/2;

    do
        {
            for(int i = 0; i <leftIndex; i++)
                {
                    if(filledArray[dividePosition]<filledArray[i] && i<dividePosition && direction==1)
                        {
                            swapTwoValues(filledArray+dividePosition, filledArray+i);
                            dividePosition = i;
                        }
                    if(filledArray[dividePosition]>filledArray[i] && i>dividePosition==1)
                        {
                            swapTwoValues(filledArray+dividePosition, filledArray+i);
                            swapTwoValues(filledArray+(dividePosition+1), filledArray+i);
                        }
                    if(filledArray[dividePosition]>filledArray[i] && i<dividePosition && direction==2)
                        {
                            swapTwoValues(filledArray+dividePosition, filledArray+i);
                            dividePosition = i;
                        }
                    if(filledArray[dividePosition]<filledArray[i] && i>dividePosition && direction==2)
                        {
                            swapTwoValues(filledArray+dividePosition, filledArray+i);
                            swapTwoValues(filledArray+(dividePosition+1), filledArray+i);
                        }

                    leftIndex = dividePosition;
                    mainDividePosition = dividePosition;
                    dividePosition = leftIndex/2;
                }
        }
    while(leftIndex != 1);



}














