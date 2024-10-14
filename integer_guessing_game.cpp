#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(static_cast<unsigned>(time(0)));
	int N = 1 + rand() % 100, G;
	char Again = 'Y';
	do
	{
	N = 1 + rand() % 100;
	cout << "I am thinking of a number from 1 - 100!";
	cout << "\nIf you guess correctly, you win!";
	do
	{
		cout << "\nEnter your guess now: ";
		cin >> G;
		if (G > N)
			cout << "You are too high" << endl;
		else if (G < N)
			cout << "You are too low" << endl;
		else
			cout << "You guessed correctly" << endl;
	} while (G != N);
	cout << "Do you want to play againg? Enter a 'Y' for yes: \n";
	cin >> Again;
	} while (Again == 'Y' || Again == 'y');
	system("pause");
	return(0);
}