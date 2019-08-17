#include "charStats.h"
#include <iostream>
#include <time.h>

using namespace std;

/*int setStr()
{

}

int setEnd()
{

}

int setAgl()
{

}

int setInt()
{

}*/

void charStats::setRace(int counter)
{
	switch (counter)
	{
	case 1: race = "Cyclops";
		break;
	case 2: race = "Dragonoid";
		break;
	case 3: race = "Bugbear";
		break;
	}
}

void charStats::genStats()
{
	static int r[4] = {0, 0, 0, 0};

		//set the seed
		srand((unsigned)time(NULL)%100);

		//generate stats
		for (int i = 0; i < 4; i++)
		{
			r[i] = rand() % (5 + 1);
		}

		//eliminate zeros
		for (int i = 0; i <= 3; i++)
		{
			if (r[i] == 0)
			{
				r[i] += 1;
			}
		}

		//apply bonus/neg
		if (race == "Cyclops")
		{
			if (r[3] < 5)
			{
				r[3] += 1;
				cout << "\nBonus applied (INT)";
			}

			if (r[1] > 1)
			{
				r[1] -= 1;
				cout << "\nNegative applied (END)";
			}
		}
		else if (race == "Dragonoid")
		{
			if (r[2] < 5)
			{
				r[2] += 1;
				cout << "\nBonus applied (AGL)";
			}

			if (r[0] > 1)
			{
				r[0] -= 1;
				cout << "\nNegative applied (STR)";
			}
		}
		else if (race == "Bugbear")
		{
			if (r[0] < 5)
			{
				r[0] += 1;
				cout << "\nBonus applied (STR)";
			}

			if (r[3] > 1)
			{
				r[3] -= 1;
				cout << "\nNegative applied (INT)";
			}
		}

		//print stats
		cout << "\n\nStrength: " << r[0] << endl;
		cout << "Endurance: " << r[1] << endl;
		cout << "Agility: " << r[2] << endl;
		cout << "Intelligence:" << r[3] << endl;
}

/*

int getStr()
{

}

int getEnd()
{

}

int getAgl()
{

}

int getInt()
{

}*/

string charStats::getRace(void)
{
	return race;
}


//name

void charStats::setName(string newname)
{
	name = newname;
}

string charStats::getName(void)
{
	return name;
}