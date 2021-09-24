#include <iostream>

using namespace std;

int main()
{
    int secretNum = 12;
    int guess;
    int guessCount = 0;
    int guesslimit = 3;
    bool outOfGuesses = false;


    while (secretNum != guess && !outOfGuesses)
    {
        if (guessCount < guesslimit)
            {
                cout << "Enter a number: ";
                cin >> guess;
                guessCount++;
            }
            else
            {
                outOfGuesses = true;
            }
    }

    if(outOfGuesses)
    {
        cout << "You lose" << endl;
    }
    else
    {
        cout << "Ye, you win!" <<endl;
    }
    return 0;
}
