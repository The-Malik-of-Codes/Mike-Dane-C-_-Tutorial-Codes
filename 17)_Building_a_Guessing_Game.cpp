#include <iostream>

using namespace std;

int main()
{
    int secretNum = 12;
    int guess;

    while (secretNum != guess)
    {
        cout << "Enter a number: ";
        cin >> guess;
    }
    cout << "Ye, you win!" <<endl;
    return 0;
}
