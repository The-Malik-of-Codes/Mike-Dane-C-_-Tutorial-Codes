#include <iostream>

using namespace std;

int main() {
	string name;
	cout << "Enter your name: " <<endl;
	getline (cin, name) ;
	cout << "Hi " << name << ", How do you do? "<< endl;
	return 0;
}