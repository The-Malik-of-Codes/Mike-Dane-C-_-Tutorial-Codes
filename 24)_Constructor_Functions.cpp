#include <iostream>

using namespace std;

// A constuctor function call a fuction that get called in a class
class Books
{
public:
    string title;
    string author;
    double pages;
    int referencesNo;
    Books(){
        cout << "Creating Object \n";
    }
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

    return 0;
}