#include <iostream>
using namespace std;

int main()
{
	int N1, N2;
	cout << "Enter a integer: ";
	cin >> N2;
	cout << "Enter another integer: ";
	cin >> N1;
	if (N2 % N1 == 0)
		cout << N1 << " is a multiple of " << N2 << "\n";
	if (N2 % N1 != 0)
		cout << N1 << " is not a multiple of " << N2 << "\n";
	system("pause");
	return(0);
}
