#include <iostream>
using namespace std;

int main()
{
	int N[3], sum = 0;
	bool Neg = false;

	cout << "You will be entering three integers";
	for (int x = 0; x <= 2; x++)
	{
		
		cout << "Enter an integer " << x + 1 << ": ";
		cin >> N[x];
		sum += N[x];
		if (N[x] < 0)
			Neg = true;
		cout << "the sum of the three integers is " << sum;
		if (Neg)
			cout << "\nA negative integr was entered\n\n";
		else
			cout << "\nOnly positive integers were entered\n\n";
	}


	system("pause");
	return (0);
}
