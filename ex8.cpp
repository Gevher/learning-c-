#include <iostream>

using namespace std;

//inprogress
struct book
{
        string author;
        string title;
        int yearOfPublication;


}book1, book2, book3;


book fillInfo(book);
void printBookInfo(book);

int main()
{

    fillInfo(book1);
    fillInfo(book2);
    fillInfo(book3);
    printBookInfo(book1);
    printBookInfo(book2);
    printBookInfo(book3);


    return 0;
}

book fillInfo(book emptyBook)
{
    cout << "You are filling informations about new book. Please type in author : " << endl;
    cin >> emptyBook.author;
    cout << "Well done. Please type in title :" << endl;
    cin >> emptyBook.title;
    cout << "Well done. Please type in year of publication : " << endl;
    cin >> emptyBook.yearOfPublication;
}

void printBookInfo (book filledBook)
{
    cout << filledBook.author << " , " << filledBook.title << " , " << filledBook.author << endl;
}
