#include <iostream>
using namespace std;

int main()
{
	int N1, N2;
	float F1, F2;

	cout << "Enter an integer: ";
	cin >> N1;
	cout << "Enter another integer: ";
	cin >> N2;
	cout << "\n The sum of the two integers is " << N1 + N2 << endl;
	cout << "\n The two integers divided is " << N1 / N2 << endl;
	cout << "\n The remainder of the two integers divided is " << N1 % N2 << endl;
	cout << "\n The difference of the two integers is " << N1 - N2 << endl;
	F1 = N1;
	F2 = N2;
	cout << "\n The division of the two floats is ";
	cout << F1 / F2 << endl;
	system("pause");
	return (0);
}