#include <iostream>

using namespace std;

int main()
{
	cout << " The Malik of Codes";
	cout << " Hello " << endl;
	cout << "\n" ;
	cout << "\n" ;
	
	cout << " The Malik of Codes" << endl;
	cout << " Hello " << endl;
	cout << "\n" ;
	cout << "\n" ;
			
	cout << " The Malik of Codes\n";
	cout << " Hello " << endl;
	cout << "\n" ;
	cout << "\n" ;
	
	string phrase = "The Malik  of Codes";
	cout << phrase;
	cout << "\n" ;
	cout << "\n" ;
	
	cout << " This is for string function" << endl;
	cout << phrase.length() << endl;
	cout << phrase[0] << endl;
	cout << phrase[2] << endl;
	phrase[18] = 'r';
	cout << phrase << endl;
	cout << phrase.find(" Malik", 0) << endl;
	cout << phrase.substr(2, 6) << endl;
	string phrasesub;
	phrasesub = phrase.substr(5,8);
	cout << phrasesub << endl;
	return 0;
}