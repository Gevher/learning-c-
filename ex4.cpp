#include <iostream>
#include <cstdlib>
#include <limits>
#include <limits.h>

using namespace std;

void menu(); void square(); void rectangle(); void triangle();void circle ();
char quit = 'n';

int main ()
{
    int choice, ct = 0;
    string dupa;

    while (quit != 'Y' && quit != 'y' )
    {
        menu();

        if(quit == 'n' || quit =='N' && quit != 'Y' && quit != 'y')
        {
            while (!(cin >> choice))
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                system("cls");
                cout << "Wrong input." << endl;
                menu();
            }


            switch (choice)
            {
            case 1:
                {
                    system("cls");
                    square();
                    break;
                }
            case 2 :
                {
                    system("cls");
                    rectangle();
                    break;
                }
            case 3 :
                {
                    system("cls");
                    triangle();
                    break;
                }
            case 4 :
                {
                    system("cls");
                    circle();
                    break;
                }
            case 5:
                {
                    cin >> dupa ;
                    cout << "Kasza kasza : " << dupa << endl;
                    break;
                }
            default:
                {
                    system("cls");
                    cout << "Wrong input." << endl;
                }
            }
        }
        else
        {
            cout << "Bad input. Try again." << endl;
            cin >> quit;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }


    return 0;
}

void menu()
{
    cout << "Select an option : " << endl;
    cout << "1. Square" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "4. Circle" << endl;
}

void square()
{
    double a;
    cout << "Square selected. Please insert side leght." << endl;
    cin >> a;
    a *= a;
    cout << "Field is equal to " << a << endl << endl;
    cout << "Do you want to quit the program?(Y/N)" << endl;
    cin >> quit;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    system("cls");
}

void rectangle()
{
    double a, b;
    cout << "Rectangle selected. Please insert sides leght." << endl;
    cout << "Side a." << endl;
    cin >> a;
    cout << "Side b." << endl;
    cin >> b;
    a *= b;
    cout << "Field is equal to " << a << endl << endl;
    cout << "Do you want to quit the program?(Y/N)" << endl;
    cin >> quit;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    system("cls");
}

void triangle ()
{
    double a,h;
    cout << "Triangle selected. Please insert height and side leght." << endl;
    cout << "Height" << endl;
    cin >> h;
    cout << "Side" << endl;
    cin >> a;
    h /= 2;
    a *= h;
    cout << "Field is equal to " << a << endl << endl;
    cout << "Do you want to quit the program? (Y/N)" << endl;
    cin >> quit;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    system("cls");
}

void circle ()
{
    double r;
    cout << "Circle selected. Please insert radius." << endl;
    cin >> r;
    r *=r;
    r *=3.14;
    cout << "Field is equal to " << r << endl << endl;
    cout << "Do you want to quit the program? (Y/N)" << endl;
    cin >> quit;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    system("cls");
}
