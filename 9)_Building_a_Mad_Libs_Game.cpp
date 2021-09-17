#include <iostream>

using namespace std;

int main()
{
	string colour, pluralNoun, celebrity;
	
	cout << "Enter a colour: ";
	getline(cin, colour);
	cout << "Enter a pluralNoun: ";
	getline(cin, pluralNoun);
	cout << "Enter a celebrity: ";
	getline(cin, celebrity); 
	
	cout << "Roses are " << colour << endl;
	cout << pluralNoun <<" are red" << endl;
	cout << "I love " << celebrity << endl;
	return 0;
}