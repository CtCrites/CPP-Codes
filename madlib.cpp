#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name, adjective, day, activity, adverb, nouns, city, holiday, adjective2;
		int year;
		char N;

	//Introduction
		cout << "Welcome to Cameon's Madlib";
		cout << "\n You will be asked some questions and";
		cout << "\n your response will then be used to ";
		cout << "\n create a story!";
		cout << "\n When you are ready to begin, type an 'N'";
		cout << "\n followed by the enter key: ";
		cin >> N;
	//Questions
		cout << "Enter the first name of one of your friends: ";
		cin >> name;
		cout << "Please enter a weather pattern: ";
		cin >> adjective;
		cout << "Enter a year: ";
		cin >> year;
		cout << "Please enter a day of the week: ";
		cin >> day;
		cout << "What is your favorite holiday? ";
		cout << "\n If it is multiple words, use underscore ";
		cout << " for space. ie. saint_Patrick's_Day: ";
		cin >> holiday;
		cout << "Please enter an activity: ";
		cin >> activity;
		cout << "Enter an adverb ending in -ly: ";
		cin >> adverb;
		cout << "Give a plural noun: ";
		cin >> nouns;
		cout << "Enter a city you wish to visit";
		cout << "\n If it is multiple words, use underscore for space";
		cout << " ie. New_York_City: ";
		cin >> city;
		cout << "Lastly, please enter an adjective: ";
		cin >> adjective2;
		//Story
		cout << "\n When you are ready to see your story, ";
		cout << "type an 'N' followed by the enter key: ";
		cin >> N;
		cout << "\n It was a " << day << " and it was very " << adjective << " out,";
		cout << " when you and " << name << " found a time machine and went to " << year << " " << city << ".";
		cout << "\n Little did you know that it was " << holiday << " and the sreets were too crowded.";
		cout << "\n Luckily you found a short cut and " << adverb << " made your way to a festival full of " << nouns << ".";
		cout << "\n Although fun, you made it out of the " << nouns << " festival just in time to go on your daily " << activity;
		cout << " with " << name << ".";
		cout << "\n It was a " << adjective2 << " day, but it was time to go home now.";
		//Conclusion
		cout << "\nThanks for playing Cameron's Madlib!\n";
		cout << "That was a crazy story wasn't it?\n";
		cout << "We hope you enjoyed the game\n";
		cout << "If you want to play again, click the ";
		cout << "play button at the top of your screen\n";
		cout << "\n\nCopyright MHS Gams 2019\n\n";
		system("pause");
		return (0);
}