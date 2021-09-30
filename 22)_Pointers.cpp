#include <iostream>

using namespace std;

int main()
{
    int age = 20;
    int *pAge = &age;
    double gpa = 3.3;
    double *pGpa = &gpa;
    string name = "Asmaau";

    cout << &age << endl; // this is to know where the variable are stored.
    cout << &gpa << endl;
    cout << &name << endl;
    cout << pAge << endl;
    cout << *pAge << endl; // this disreference the earlier pointer

    return 0;
}
