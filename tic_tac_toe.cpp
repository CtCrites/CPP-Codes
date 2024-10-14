#include <iostream>
using namespace std;

int main()
{
	char ttt[9] = {'1','2','3','4','5','6','7','8','9'};
	int choice;
	for (int x = 1; x <= 9; x++)
	{
		for (int z = 0; z <= 8; z++)
		{
			cout << ttt[z];
			if (z != 2 && z != 5 && z != 8)
				cout << "|";
			if (z == 2 || z == 5)
				cout << endl << "-----\n";
		}


		cout << "\nEnter a number to place an O: ";
		cin >> choice;
		cout << endl;
		system("CLS");
		switch (choice)
		{
		case 1: ttt[0] = 'O'; break;
		case 2: ttt[1] = 'O'; break;
		case 3: ttt[2] = 'O'; break;
		case 4: ttt[3] = 'O'; break;
		case 5: ttt[4] = 'O'; break;
		case 6: ttt[5] = 'O'; break;
		case 7: ttt[6] = 'O'; break;
		case 8: ttt[7] = 'O'; break;
		case 9: ttt[8] = 'O'; break;
		default: break;
		}
		system("CLS");
		for (int z = 0; z <= 8; z++)
		{
			cout << ttt[z];
			if (z != 2 && z != 5 && z != 8)
				cout << "|";
			if (z == 2 || z == 5)
				cout << endl << "-----\n";
		}


		cout << "\nEnter a number to place an X: ";
		cin >> choice;
		cout << endl;
		switch (choice)
		{
		case 1: ttt[0] = 'X'; break;
		case 2: ttt[1] = 'X'; break;
		case 3: ttt[2] = 'X'; break;
		case 4: ttt[3] = 'X'; break;
		case 5: ttt[4] = 'X'; break;
		case 6: ttt[5] = 'X'; break;
		case 7: ttt[6] = 'X'; break;
		case 8: ttt[7] = 'X'; break;
		case 9: ttt[8] = 'X'; break;
		default: break;
		}
		system("CLS");
		for (int z = 0; z <= 8; z++)
		{
			cout << ttt[z];
			if (z != 2 && z != 5 && z != 8)
				cout << "|";
			if (z == 2 || z == 5)
				cout << endl << "-----\n";
		}

		cout << endl << endl;
	}
	system("pause");
	return(0);
}