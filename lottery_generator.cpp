#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(static_cast<unsigned>(time(0)));
	int T, X = 1, I1, I2, I3;
	float R;

	R = rand();
	cout << "Welcome to Cameron's lucky numbers\n";
	cout << "How many tickets would you like?: ";
	cin >> T;
	I1 = rand() % 10;
	I2 = rand() % 10;
	I3 = rand() % 10;

	cout << "\nYour numbers are - \n" << endl;
	while (X <= T)
	{
		cout << "Ticket " << X << " - " << I1 << " " << I2 << " " << I3 << endl;
		X = X + 1;
		I1 = rand() % 10;
		I2 = rand() % 10;
		I3 = rand() % 10;
	}
	cout << "Good luck, hope you are a winner!\n\n";
	system("pause");
	return(0);
}