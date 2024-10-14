#include <iostream>
using namespace std;
int main()
{
	int odd = 0, even = 0, N;

	do
	{
		cout << "Enter an integer";
		cout << "\nEnter a '0' to stop entering integers\n";
		cin >> N;
		if (N % 2 == 0)
			even += 1;
		else
			odd += 1;

	} while (N != 0);
	cout << "\n The number of even integers entered was: " << even;
	cout << "\n The number of odd integers entered was: " << odd;
	cout << endl << endl;
	system("pause");
	return (0);
}