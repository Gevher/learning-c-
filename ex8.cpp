#include <iostream>

using namespace std;

//inprogress
struct book
{
        string author;
        string title;
        string yearOfPublication;
};


book createBook();
void printBookInfo(book);

int main()
{
    book book1 = createBook();
    book book2 = createBook();
    book book3 = createBook();
    printBookInfo(book1);
    printBookInfo(book2);
    printBookInfo(book3);


    return 0;
}

book createBook()
{
    book newBook;
    cout << "You are filling informations about new book. Please type in author : " << endl;
    getline(cin,  newBook.author);
    cout << "Well done. Please type in title :" << endl;
    getline(cin, newBook.title);
    cout << "Well done. Please type in year of publication : " << endl;
    getline(cin, newBook.yearOfPublication);
    return newBook;
}

void printBookInfo (book filledBook)
{
    cout << filledBook.author << " , " << filledBook.title << " , " << filledBook.yearOfPublication << endl;
}
