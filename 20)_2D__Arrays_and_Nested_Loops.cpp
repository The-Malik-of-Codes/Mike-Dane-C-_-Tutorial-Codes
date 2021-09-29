#include <iostream>

using namespace std;

int main()
// For 2D Arrays
{
    int numberGrid[3][2] = {
                                {1, 2},
                                {3, 4},
                                {5, 6}
                            };
    cout << numberGrid[0][0] << endl;
    cout << numberGrid[1][1] << endl;
    cout << numberGrid[2][0] << endl;
    return 0;
}