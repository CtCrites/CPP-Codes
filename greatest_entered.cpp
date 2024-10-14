#include <iostream>
using namespace std;

int main()
{
	int num, place, greatest, b;
	int Ary[5];

	cout << "Please enter your three favorite numbers\n";
	cout << "press return after every number entered\n";
	for (int num = 1; num <= 3; num++)
	{
		cout << "Enter a number - ";
		cin >> Ary[num];
	}
	greatest = Ary[1];
	place = 1;
	for (b = 2; b <= 3; b++)
		if (Ary[b] > greatest)
		{
			greatest = Ary[b];
			place = b;
		}
	cout << "The greatest number you entered was " << greatest << endl;
	cout << greatest << " was the " << place << " number you entered\n";
	system("pause");
	return (0);
}

