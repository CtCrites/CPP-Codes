#include <iostream>
using namespace std;

int main()
{
	int N1, N2, N3;

	cout << "Enter an integer: ";
	cin >> N1;
	cout << "Enter another integer: ";
	cin >> N2;
	cout << "Enter another integer: ";
	cin >> N3;
	if (N1 == N2)
		cout << "The two numbers are equal\n";
	if (N1 != N2)
		cout << "The two integers are not equal\n";
	if (N1 > N2 + N3)
		cout << N1 << " is greater than the sum of " << N2 << " + " << N3 << endl;

	system("pause");
	return (0);
}