 #include <iostream>

 using namespace std;

void sayHi ()
{
   cout << "Hello User!\n";
   cout << "Let see if this work\n";
   cout << "\n";
}

void sayHello(string name, int age);

 int main()
{
   cout << "Top\n"<< endl;
   sayHi();
   cout << "Bottom\n" << endl;
   sayHello("Umar Mukhtar", 30);
   sayHello("Umar Olamide", 20);
   sayHello("Umar Abu saad", 19);
   sayHello("Umar Al faruq", 17);
   return 0;
 }

 void sayHello(string name, int age)
 {
    cout << "Hello " << name << ", you are " << age << " years old\n";
 }