#include <iostream>
using namespace std;

int main()
{
	float goal = 1000000, S = 1000, IR = 0.02, B = 0, I = 0;
	int year = 0;

	do
	{
		if (year >= 25 && year <= 65)
		{
			B = B + S;
		}
		B = B + 1000 + I;
		I = B * IR;
		year = year + 1;
		cout << "Year " << year << " Balance = " << B;
		cout << " Interest earned = " << I << endl;
	} 
	while (B < goal);

	system("pause");
	return(0);
}