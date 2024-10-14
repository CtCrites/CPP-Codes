#include <iostream>
using namespace std;

int main()
{
	int N;

	cout << "Enter an integer: ";
	cin >> N;
	cout << "\n++" << N << " = " << ++N;
	cout << "\n" << "N++" << " = " << N++;
	cout << "\n" << N;
	cout << endl;
	system("pause");
	return (0);
}