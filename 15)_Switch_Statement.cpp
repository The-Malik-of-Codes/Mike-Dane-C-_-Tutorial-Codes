#include <iostream>

using namespace std;

string getDayofWeek(int dayNum)
{
    string dayName;
    if(dayNum == 0)
    {
        dayName = "Sunday";
    }
    else if(dayNum == 1)
    {
        dayName = "Monday";
    }
    else if(dayNum == 3)
    {
        dayName = "Tuesday";
    }
    else if(dayNum == 4)
    {
        dayName = "Wednesday";
    }
    else if(dayNum == 5)
    {
        dayName = "Thursday";
    }
    else if (dayNum == 6)
    {
        dayName = "Sunday";
    }
    else
    {
        cout << "Invalid day \n";
    }
    return dayName;
}   

int main()
{
    cout << "hello" << endl;
    cout << getDayofWeek(0) << endl;
    return 0;
}