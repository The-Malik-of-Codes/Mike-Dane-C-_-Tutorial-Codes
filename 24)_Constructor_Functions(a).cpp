#include <iostream>

using namespace std;

// A constuctor function call a fuction that get called in a class
class Books{
    public:
        string title;
        string author;
        double pages;
        int referencesNo;
        Books(string name){
            cout << name << endl;
        }
};

int main()
{

    Books AhmadBook("The biography of All the Nabi(a.s.)");
    AhmadBook.title = "The biography of All the Nabi(a.s.)";
    AhmadBook.author = "Zafaran Adeniyi";
    AhmadBook.pages = 2035;
    AhmadBook.referencesNo = 86354684;

    Books AsmaauBook("The Atom");
    AsmaauBook.title = "The Atom";
    AsmaauBook.author = "Ababio";
    AsmaauBook.pages = 1230;

    return 0;
}