#include <iostream>

using namespace std;

int main()
{
	int luckyNums[] = {159, 29, 33, 40, 5, 6, 63, 48};

	cout << luckyNums[0] << endl;
	cout << luckyNums[2] << endl;
	cout << luckyNums[3] << endl;
	cout << luckyNums[1] << endl;
	cout << luckyNums[6] << endl;
	cout << luckyNums[7] << endl;
	cout << ""<< endl;

	luckyNums[0] = 10;
	cout << luckyNums[0] << endl;
	cout << ""<< endl;

	int luckyNum[10] = {0, 1, 2, 3, 4, 5, 6, 9, 12};
	luckyNum[1] = 20;
	cout << luckyNums[1] << endl;
	cout << "That all for now." << endl;
	return 0;
} 