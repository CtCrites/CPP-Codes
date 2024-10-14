#include <iostream>
#include <ctime>
using namespace std;

int main()
{

	srand(static_cast<unsigned>(time(0)));
	int S;
	char C;
	do
	{
		system("CLS");
		
		S = 1 + rand() % 20;

		cout << "Welcome to the MHS Magic 8 Ball";
		cout << "\nSpeak your question, and i will reveal ";
		cout << "your fate!\n";
		cout << "Type a 'C' after your question followed by enter: ";
		cin >> C;
		for (int X = 1; X <= 10000; X++)
		{
			cout << "Thinking\r";

		}
		switch (S)
		{
		case 1: cout << "Hell yeah brother\n"; break;
		case 2: cout << "I guess so\n"; break;
		case 3: cout << "Fo sho\n"; break;
		case 4: cout << "Fo shizzle ma nizzle\n"; break;
		case 5: cout << "You guessed it\n"; break;
		case 6: cout << "Damn straight\n"; break;
		case 7: cout << "Do i look like a genius\n"; break;
		case 8: cout << "How should i know\n"; break;
		case 9: cout << "Does a bear shit in the woods\n"; break;
		case 10: cout << "Dude...Gross\n"; break;
		case 11: cout << "I dont know...Maybe\n"; break;
		case 12: cout << "Im not touching that question with a 10ft pole\n"; break;
		case 13: cout << "Shut up...\njust SHUT UP\n"; break;
		case 14: cout << "Never speak to me again\n"; break;
		case 15: cout << "It isnt lookin like it\n"; break;
		case 16: cout << "Think again\n"; break;
		case 17: cout << "What do you think?\n"; break;
		case 18: cout << "That is the stupidest question ive ever heard\n"; break;
		case 19: cout << "Not really\n"; break;
		case 20: cout << "This aint it chief\n"; break;
		}
		cout << "\n\nWould you like to ask another question?";
		cout << "\nType a 'Y' for yes, or an 'N' for no: ";
		cin >> C;
	} while (C == 'Y' || C == 'y');
	system("pause");
	return(0);
}