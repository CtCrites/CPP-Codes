#include <iostream>
using namespace std;

int main()
{
	char day, ans;

	do
	{ 

		cout << "Enter the day of the week \n";
		cout << "by typing the capitalized letter\n";
		cout << "Mon, Tue, Wed, thuR, Fri, Sat, sUn \n";
		cin >> day;
		switch (day)
		{
		case 'M':
		case 'm': cout << "Tomorrow is Tuesday\n"; break;
		case 'T':
		case  't': cout << "Tomorrow is Wednesday\n"; break;
		case 'W':
		case 'w': cout << "Tomorrow is Thursday\n"; break;
		case 'R':
		case 'r': cout << "Tomorrow is Friday\n"; break;
		case 'F':
		case 'f': cout << "Tomorrow is Saturday\n"; break;
		case 'S':
		case 's': cout << "Tomorrow is Sunday\n"; break;
		case 'U':
		case 'u': cout << "Tomorrow is Monday\n"; break;
		default: cout << "Bad input\n"; break;
		}
		cout << "Would you like to run this program again?\n";
		cout << "Enter 'Y' for yes, or enter 'N' for no: ";
		cin >> ans;
	} 

	while (ans == 'Y' || ans == 'y');
	system("pause");
	return(0);
}
