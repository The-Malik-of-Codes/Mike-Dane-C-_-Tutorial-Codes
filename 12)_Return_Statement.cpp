#include <iostream>

using namespace std;

double cube(double num)
{
    double result = num * num * num + num;
    return result;
}

int main()
{
    cube(3.2);
    cout << cube(3.2) << endl;
    double answer = cube(5.7);
    cout << answer <<endl;
    return 0;
}
