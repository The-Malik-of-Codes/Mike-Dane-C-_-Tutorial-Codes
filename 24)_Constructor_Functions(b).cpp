#include <iostream>

using namespace std;

// A constuctor function call a fuction that get called in a class
class Book{
    public:
        string title;
        string author;
        double pages;
        int referencesNo;
        Book(string aTitle, string aAuthor, double aPages, int aReferencesNo){
            title = aTitle;
            author = aAuthor;
            pages = aPages;
            referencesNo = aReferencesNo;
        }
};

int main()
{

    Book AhmadBook("The biography of All the Nabi(a.s.)", "Zafaran Adeniyi", 2035, 455368545);
    Book AsmaauBook("The Atom", "Ababio", 1230, 646354541);

    cout << AhmadBook.author << endl;
    cout << AsmaauBook.title <<endl;
    cout << AsmaauBook.pages << endl;

    return 0;
}