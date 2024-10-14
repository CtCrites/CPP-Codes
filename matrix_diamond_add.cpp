#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int sum;
	int Grid[3][3];
	cout << "Enter nine integes\n";
	for (int row = 0; row <= 2; row++)
		for (int col = 0; col <= 2; col++)
			cin >> Grid[row][col];
	for (int row = 0; row <= 2; row++)
	{
		for (int col = 0; col <= 2; col++)
		{
			cout << setw(5) << Grid[row][col];
		}
		cout << endl;

		sum = Grid[0][1] + Grid[1][0] + Grid[1][2] + Grid[2][1];
	}
	cout << "----------------\n";
	cout << "The sum of the outside middle numbers is " << sum << endl;



	system("pause");
	return(0);
}