#include <iostream>
using namespace std;

int square(int); //function prototype

int main()
{
	for (int x = 1; x <= 10; x++)
		cout << square(x) << " ";
	cout << endl;
	system("pause");
	return (0);
}

int square(int y)
{
	return y * y;

}

