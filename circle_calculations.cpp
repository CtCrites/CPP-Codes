#include <iostream>
using namespace std;

int main()
{

	float	pi = 3.14;
	int choice, R;

	cout << "Enter the radius of the circle: ";
	cin >> R;
	cout << "\nWould you like to know the area, ";
	cout << "\ndiameter, or circumference of the circle? ";
	cout << "\nEnter a 1 for area, 2 for diameter, or ";
	cout << "3 for circumference\n";
	cin >> choice;
	switch (choice)
	{
	case 1: cout << "\nThe area is " << pi * (R * R) << endl; break;
	case 2: cout << "\nThe diameter is " << R + R << endl; break;
	case 3: cout << "\nThe circumference is " << (2 * pi*R) << endl; break;

	}
	system("pause");
	return(0);
}
