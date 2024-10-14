#include <iostream>
#include <string>
using namespace std;

int main()
{
	int G1, G2, G3;
	float total;
	string Password;
	cout << "Enter your password: ";
	cin >> Password;
	if (Password == "Wack")
	{
	cout << "Enter grade 1: ";
	cin >> G1;
	cout << "Enter grade 2: ";
	cin >> G2;
	cout << "Enter grade 3: ";
	cin >> G3;
	total = (G1 + G2 + G3) / 3;
	if (total >= 90)
	{
		cout << "You have earned an A";
		cout << "\nYou must have put down your phone and paid attention\n";
	}
	if (total >= 80 && total <= 89)
		cout << "You have earned a B\n";
	if (total >= 70 && total <= 79)
		cout << "You have earned a C\n";
	if (total >= 65 && total <= 69)
		cout << "You have earned a D\n";
	if (total <= 64)
		cout << "You have earned an F\n";
}
	if (Password != "Wack")
		cout << "That is incorrect";
	system("pause");
		return(0);

}