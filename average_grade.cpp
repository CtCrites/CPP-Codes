#include <iostream>
#include <string>
using namespace std;

int main()
{
	string ans = "Y";
	float G=0, T=0, N=1;
	cout << "Welcome to the grader\n";
	
	while (ans == "Y" | ans == "y")
	{
		cout << "Enter grade " << N << ": ";
		cin >> G;
		T = T + G;
		cout << "Do you have another grade to enter? ";
		cout << "Type 'Y' to continue, 'E' to exit\n";
		cin >> ans;
		N = N + 1;
	}
	cout << "You entered " << N << " grades or an";
	cout << " average of " << T / (N-1) << "%\n\n";
	system("pause");
	return (0);
}