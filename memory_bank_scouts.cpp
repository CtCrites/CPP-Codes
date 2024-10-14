#include <iostream>
#include <string>
using namespace std;

int a, b, c, d, z = 1;
char Y = 'M';


string X;

int main()
{
	cout << "What's the password?\n";
	cin >> X;
	system("CLS");
	if (X == "20021226")
	{
		while (Y == 'M' || Y == 'm')
		{
			system("CLS");
			//Menu
			cout << "What would you like to know?\n";
			cout << "1. When did I join Boy Scouts?\n";
			cout << "2. When did I earn a specific rank in Boy Scouts?\n";
			cout << "3. How many merit badges do I have?\n";
			cout << "4. What positions have I held?\n";
			cout << "5. When did I obtain a specific honor of the Order of the Arrow?\n";
			cin >> a;
			system("CLS");

			//When did i join Boy Scouts
			if (a == 1)
			{
				cout << "I crossed over from Cub Pack 3605 to Troop 605 on April 1, 2014\n\n";
				cout << "Press 'M' to return to the menu\nOr 'E' to exit\n\n";
				cin >> Y;
				system("CLS");
			}
			//When did i earn a specific rank in the BSA
			if (a == 2)
			{
				cout << "Which specific rank?\n\n";
				cout << "1. Tenderfoot\n";
				cout << "2. Second Class\n";
				cout << "3. First Class\n";
				cout << "4. Star\n";
				cout << "5. Life\n";
				cout << "6. Eagle\n";
				cin >> b;
				system("CLS");
				switch (b)
				{
				case 1: cout << "I earned the rank of Tenderfoot on September 3, 2014\n\n";
					cout << "Press 'M' to return to the menu\nOr 'E' to exit\n\n";
					cin >> Y; break;
				case 2: cout << "I earned the rank of Second Class on September 3, 2014\n\n";
					cout << "Press 'M' to return to the menu\nOr 'E' to exit\n\n";
					cin >> Y; break;
				case 3: cout << "I earned the rank of First Class on February 18, 2015\n\n";
					cout << "Press 'M' to return to the menu\nOr 'E' to exit\n\n";
					cin >> Y; break;
				case 4: cout << "I earned the rank of Star on August 24, 2016\n\n";
					cout << "Press 'M' to return to the menu\nOr 'E' to exit\n\n";
					cin >> Y; break;
				case 5: cout << "I earned the rank of Life on September 9, 2017\n\n";
					cout << "Press 'M' to return to the menu\nOr 'E' to exit\n\n";
					cin >> Y; break;
				case 6: cout << "I completed my Eagle Board of Review on December 13, 2020\n";
					cout << "I completed my shed restoration project for the Milton AYSO on August 30, 2020\n\n";
					cout << "Press 'M' to return to the menu\nOr 'E' to exit\n\n";
					cin >> Y; break;
				}
			}
			//How many merit badges do i have
			if (a == 3)
			{
				cout << "I have earned a total of 23 merit badges\n";
				cout << "With 12 being Eagle required and 11 being an elective\n";
				cout << "I have earned:\n";
				cout << "-Geology\n-Citizenship in the World\n-Cooking\n-Geocaching\n";
				cout << "-Pioneering\n-Pottery\n-Wilderness Survival\n-Aviation\n";
				cout << "-Personal Fitness\n-First Aid\n-Art\n-Citizenship in the Community\n";
				cout << "-Swimming\n-Citizenship in the Nation\n-Camping\n-Climbing\n";
				cout << "-Lifesaving\n-Indian Lore\n-Leatherworking\n-Medicine\n";
				cout << "-Communication\n-Family Life\n-Environmental Science\n\n";
				cout << "Press 'M' to return to the menu\nOr 'E' to exit\n\n";
				cin >> Y;
			}
			//What positions have i held
			if (a == 4)
			{
				cout << "With which part of scouting do you wish to see my positions held?\n";
				cout << "1. Boy Scouts\n2. Venturing\n3. Order of the Arrow\n";
				cin >> d;
				system("CLS");
				switch (d)
				{
				case 1: cout << "In Boy Scouts, I have held the positions of: \n";
					cout << "-Assistant Patrol Leader\n-Senior Patrol Leader\n-Quartermaster\n";
					cout << "-OA Representative\n-Patrol Leader\n-Outdoor Ethics Guide\n\n";
					cout << "Press 'M' to return to the menu\nOr 'E' to exit\n\n";
					cin >> Y; break;
				case 2: cout << "In Venturing, I have held the positions of: \n";
					cout << "-Crew President\n-Crew VP of Program\n-Council VOA President\n-Area VOA Cabinet Member\n\n";
					cout << "Press 'M' to return to the menu\nOr 'E' to exit\n\n";
					cin >> Y; break;
				case 3: cout << "In the Order of the Arrow, I have held the positions of: \n";
					cout << "-Inductions and Enrichement Committee Chairman\n-Wapsu Achtu Chapter Chief\n";
					cout << "-Woapeu Sisilija Lodge Vice Chief\n-Lead Dancer\n";
					cout << "-Woapeu Sisilija Lodge Chief\n-American Indian Affairs Committee Chairman\n";
					cout << "-Section NE-4A Vice Chief\n-Section NE-4A High Adventure Committee Chairman\n\n";
						cout << "Press 'M' to return to the menu\nOr 'E' to exit\n\n";
					cin >> Y; break;
				}

			}
			//When did i obtain a specific honor in the OA
			if (a == 5)
			{
				cout << "Which specific honor?\n\n";
				cout << "1. Ordeal Honor\n";
				cout << "2. Brotherhood Honor\n";
				cout << "3. Vigil Honor\n";
				cin >> c;
				system("CLS");
				switch (c)
				{
				case 1: cout << "I was called out into the Order of the Arrow on July 15, 2015\n";
					cout << "I completed my ordeal on July 18, 2015\n\n";
					cout << "Press 'M' to return to the menu\nOr 'E' to exit\n\n";
					cin >> Y; break;
				case 2: cout << "I obtained the Brotherhood Honor on July 14, 2016\n\n";
					cout << "Press 'M' to return to the menu\nOr 'E' to exit\n\n";
					cin >> Y; break;
				case 3: cout << "My Vigil nomination was approved on February 25, 2019\n";
					cout << "I completed my Vigil on May 18, 2019\n";
					cout << "My Vigil name is Lauchsoheep Braknik which means Happy Flying Squirrel\n\n";
					cout << "Press 'M' to return to the menu\nOr 'E' to exit\n\n";
					cin >> Y; break;
				}
			}
		}
	}
	else
		return(0);
		while (Y == 'E' || Y == 'e')
		{
			cout << "Thank You\n";
			system("pause");
			
			cout << "Goodbye\n\n";
			return (0);
}
	system("pause");
	return (0);
}