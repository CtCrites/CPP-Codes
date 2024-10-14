#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int ColSum[4] = { 0,0,0,0 };
	int Grid[3][3];
	cout << "Enter nine integers\n";
	for (int Row = 0; Row <= 2; Row++)
		for (int Col = 0; Col <= 2; Col++)
			cin >> Grid[Row][Col];
	//Writes grid and Column sums
	for (int Row = 0; Row <= 2; Row++)
	{
		for (int Col = 0; Col <= 2; Col++)
		{
			cout << setw(5) << Grid[Row][Col];
			ColSum[Row] = ColSum[Row] + Grid[Col][Row];
		}
		cout << endl;

	}
	cout << "----------------\n";//16 dashes
	for (int Row = 0; Row <= 2; Row++)
		cout << setw(5) << ColSum[Row];
	cout << endl;
	system("pause");
	return(0);

}
