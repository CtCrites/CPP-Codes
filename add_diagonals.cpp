#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int Diag1 = 0, Diag2 = 0;
	int Grid[3][3];
	cout << "Enter nine integers\n";
	for (int Row = 0; Row <= 2; Row++)
		for (int Col = 0; Col <= 2; Col++)
			cin >> Grid[Row][Col];

	//Writes grid 
	for (int Row = 0; Row <= 2; Row++)
	{
		for (int Col = 0; Col <= 2; Col++)
		{
			cout << setw(5) << Grid[Row][Col];
		}
		cout << endl;
		Diag1 = Diag1 + Grid[Row][Row];
		Diag2 = Diag2 + Grid[2 - Row][Row];
	}
	cout << "----------------\n";//16 dashes
	cout << "The Sum of diagonal leftright = " << Diag1;
	cout << "\nThe Sum of diagonal rightleft = " << Diag2;
	cout << endl;

	system("pause");
	return (0);

}
