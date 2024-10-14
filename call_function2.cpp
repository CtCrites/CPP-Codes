#include <iostream>
using namespace std;

int multiples(int, int, int);
int value1, value2, sum = 0;

int main()
{


	cout << "Enter two integers: ";
	cin >> value1 >> value2;
	cout << value1 << " x " << value2 << " = " << multiples(value1, value2, sum);
	cout << endl;
	system("pause");
	return (0);
}

int multiples(int val1, int val2, int sum)
{
	return sum = val1 * val2;
}
