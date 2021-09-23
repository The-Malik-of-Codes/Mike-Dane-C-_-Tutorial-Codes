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
    else if(dayNum == 2)
    {
        dayName = "Tuesday";
    }
    else if(dayNum ==3)
    {
        dayName = "Wednesday";
    }
    else if(dayNum == 4)
    {
        dayName = "Thursday";
    }
    else if(dayNum == 5)
    {
        dayName = "Friday";
    }
    else if (dayNum == 6)
    {
        dayName = "Saturday";
    }
    else
    {
        cout << "Invalid day \n";
    }
return dayName;
}   

int main()
{
    cout << getDayofWeek(1) << endl;
    cout << getDayofWeek(0) << endl;
    cout << getDayofWeek(2) << endl;
    cout << getDayofWeek(5) << endl;
    cout << getDayofWeek(6) << endl;
    cout << getDayofWeek(8) << endl;
    return 0;
}
