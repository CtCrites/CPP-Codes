#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(static_cast<unsigned>(time(0)));
	char Roll;
	int D1, D2;
	do
	{
		system("CLS");
		cout << "Roll the Bones";
		cout << "Type any key followed by enter ";
		cout << "to Roll the Bones!\n";
		cout << "Roll a 7 or an 11 to win! ";
		cout << "Roll Now: ";
		cin >> Roll;
		D1 = 1 + rand() % 6;
		D2 = 1 + rand() % 6;
		cout << "\nYou rolled a " << D1 << " and a ";
		cout << D2 << endl;
		if ((D1 + D2) == 7 || (D1 + D2) == 11)
			cout << "\nCongrats dude, you won!\n\n";
		else
			cout << "You done messed up A-Aron!\n\n";
		cout << "Enter a 'Y' to play again: ";
		cin >> Roll;
	}while (Roll == 'Y' || Roll == 'y');
	system("pause");
	return(0);
}