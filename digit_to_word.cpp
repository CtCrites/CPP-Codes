#include <iostream>
using namespace std;

int main()
{
	int digit;
	cout << "Please enter a single digit number: ";
	cin >> digit;
	switch (digit)
	{
	case 0:cout << "ZERO" << endl; break;
	case 1:cout << "ONE" << endl; break;
	case 2:cout << "TWO" << endl; break;
	case 3:cout << "THREE" << endl; break;
	case 4:cout << "FOUR" << endl; break;
	case 5:cout << "FIVE" << endl; break;
	case 6:cout << "SIX" << endl;  break;
	case 7:cout << "SEVEN" << endl; break;
	case 8:cout << "EIGHT" << endl; break;
	case 9:cout << "NINE" << endl; break;
	}

	system("pause");
	return (0);
}