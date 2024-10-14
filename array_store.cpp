#include <iostream>
using namespace std;

int main()
{
	int N[20], O[20], n = 1;
	cout << "You will enter 20 integers from 10 - 100\n";
	for (int x = 0; x <= 19; x++)
	{
		cout << "Enter an integer from 10 - 100: ";
		cin >> N[x];
		O[x] = N[x];
	}
	for (int y = 0; y <= 19; y++)
	{
		for (int x = 0, n = 1; x <= 19; x++, n++)
		{
			if (N[y] == N[x] && x != y)
			{
				O[x] = 0;
			}
		}
	}
	
	for (int x = 0; x <= 19; x++)
	{
		if (N[x] >= 10 && N[x] <= 100)
			cout << N[x] << endl;

	}



	system("pause");
	return(0);
}