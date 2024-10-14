#include <iostream>
using namespace std;
int main()
{
	int box, B = 1;
	
	cout << "Enter the total number of boxes: ";
	cin >> box;

	while (B <= box)
	{
		cout << "\nAmies Garden Emporium\n";
		cout << "Suntan, Iowa 12345\n";
		cout << "Box number " << B << " of " << box << endl << endl;
		B = B + 1;

	}
	system("pause");
	return (0);
}