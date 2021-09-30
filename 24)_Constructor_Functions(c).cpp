#include <iostream>

using namespace std;

// A constuctor function call a fuction that get called in a class
class Book{
    public:
        string title;
        string author;
        double pages;
        int referencesNo;
        Book(){
            title = "no Title";
            author = "no Author";
            pages = 0;
            referencesNo = 0;
        }
        Book(string aTitle, string aAuthor, double aPages, int aReferencesNum){
            title = aTitle;
            author = aAuthor;
            pages = aPages;
            referencesNo = aReferencesNum;
        }
};

int main()
{

    Book AhmadBook("The biography of All the Nabi(a.s.)", "Zafaran Adeniyi", 2035, 455368545);
    Book AsmaauBook("The Atom", "Ababio", 1230, 646354541);
    Book book3;

    cout << book3.pages << endl;
    cout <<book3.title << endl;
    return 0;
}