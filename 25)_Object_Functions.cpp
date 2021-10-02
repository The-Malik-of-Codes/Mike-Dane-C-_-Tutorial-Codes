#include <iostream>

using namespace std;

class student
{
    public:
        string name;
        string major;
        double gpa;
        student(string aname, string amajor, double agpa){
            name = aname;
            major = amajor;
            gpa = agpa;
        }
        bool hasHonors(){
            if (gpa >= 3.5){
                return true;
            }
            return false;
        }    
};

int main()
{
    student student1("Tom", "Engineering", 4.0);
    student student2("Bob", "Developing", 3.0);
    cout << student1.hasHonors() << endl;
    cout << student2.hasHonors() << endl;
    return 0;
}