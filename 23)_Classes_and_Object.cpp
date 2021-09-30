#include <iostream>

using namespace std;

// A class is a new datatype. For example;
class Books
 {
public:
    string title;
    string author;
    double pages;
    int referencesNo;
};

int main()
{

    Books AhmadBook;
    AhmadBook.title = "The biography of All the Nabi(a.s.)";
    AhmadBook.author = "Zafaran Adeniyi";
    AhmadBook.pages = 2035;
    AhmadBook.referencesNo = 86354684;

    Books AsmaauBook;
    AsmaauBook.title = "The Atom";
    AsmaauBook.author = "Ababio";
    AsmaauBook.pages = 1230;

    cout << AhmadBook.title << endl;
    cout << AsmaauBook.title << endl;
    cout << AhmadBook.pages << endl;
    cout << AsmaauBook.author << endl;

    return 0;
}