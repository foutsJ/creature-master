#include "charStats.h"
#include <iostream>
#include <time.h>

using namespace std;

string bonus1, bonus2;

charStats::~charStats()
{
	string name = "";
	string race = "";
	bool isStrPos = 0;
	bool isStrNeg = 0;
	bool isEndPos = 0;
	bool isEndNeg = 0;
	bool isAglPos = 0;
	bool isAglNeg = 0;
	bool isIntPos = 0;
	bool isIntNeg = 0;
	int raceflg = 0;
	int str = 0;
	int end = 0;
	int agl = 0;
	int inte = 0;
}

void charStats::setStr(int nstr)
{
	//##DEBUG## init flags to 0
	isStrPos = 0;
	isStrNeg = 0;

	//##DEBUG##
	//nstr = 5;
	if (raceflg == 3)
	{
		//bugbear:setStr(nstr);
		//cout << "\nSTR bonus not yet implemented...\n";
		if (nstr <= 4)
		{
			str = nstr + 1;
			isStrPos = 1;
			//cout << "(+1)";
		}
		else
		{
			str = nstr;
		}
	}
	else if (raceflg == 2)
	{
		//dragonoid:setStr(nstr);
		if ((nstr <= 5) && (nstr >= 2))
		{
			str = nstr - 1;
			isStrNeg = 1;
			//cout << "(-1)";
		}
		else
		{
			str = nstr;
		}
	}
	else
	{
		str = nstr;
	}
}

void charStats::setEnd(int nend)
{
	isEndPos = 0;
	isEndNeg = 0;

	if (raceflg == 1)
	{
		//cyclops:setStr(nend);
		//cout << "\nEND negative not yet implemented...\n";
		if ((nend <= 5) && (nend >= 2))
		{
			end = nend - 1;
			isEndNeg = 1;
			//cout << "\n(-1)";
		}
		else
		{
			end = nend;
		}
	}
	else
	{
		end = nend;
	}
}

void charStats::setAgl(int nagl)
{
	isAglPos = 0;
	isAglNeg - 0;

	if (raceflg == 2)
	{
		//dragonoid:setAgl(nagl);
		//cout << "\nAGL bonus not yet implemented...\n\n";
		if (nagl <= 4)
		{
			agl = nagl + 1;
			isAglPos = 1;
			//cout << "\n\n\n(+1)";
		}
		else
		{
			agl = nagl;
		}
	}
	else
	{
		agl = nagl;
	}
	
}

void charStats::setInt(int nint)
{
	isIntPos = 0;
	isIntNeg = 0;

	if (raceflg == 1)
	{
		//cyclops:setInt(nint);
		//cout << "\nINT bonus not yet implemented...\n\n";
		if ((nint >= 1) && (nint <= 4))
		{
			inte = nint + 1;
			isIntPos = 1;
			//cout << "\n\n\n\n(+1)";
		}
		else
		{
			inte = nint;
		}
	}
	else if (raceflg == 3)
	{
		//Bugbear:setInt(nint);
		//cout << "\nINT negative not yet implemented...\n\n";
		if ((inte >= 2) && (inte <= 5 ))
		{
			inte = nint - 1;
			isIntNeg = 1;
			//cout << "\n\n\n\n(-1)";
		}
		else
		{
			inte = nint;
		}
	}
	else
	{
		inte = nint;
	}
}

void charStats::setRace(int counter)
{
	//pass value to race flag
	raceflg = counter;

	switch (raceflg)
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
		static int r[] = {0, 0, 0, 0};

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

		//auto send values to setters
		setStr(r[0]);
		setEnd(r[1]);
		setAgl(r[2]);
		setInt(r[3]);
}

/*int charStats::genStats()
{
	int statval = 0;

	//set the seed
	srand((unsigned)time(NULL) % 100);

	//generate stats
		statval = rand() % (5 + 1);

	//eliminate zeros
		if (statval == 0)
		{
			statval += 1;
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
}*/

int charStats::getStr()
{
	return str;
}

int charStats::getEnd()
{
	return end;
}

int charStats::getAgl()
{
	return agl;
}

int charStats::getInt()
{
	return inte;
}

string charStats::getRace(void)
{
	return race;
}

//print member functions

void charStats::printStr()
{
	cout << str;
	
	if (isStrPos == 1)
	{
		cout << " (+1)";
	}
	else if (isStrNeg == 1)
	{
		cout << " (-1)";
	}
	else
	{
		cout << "";
	}
}

void charStats::printEnd()
{
	cout << end;

	if (isEndPos == 1)
	{
		cout << " (+1)";
	}
	else if (isEndNeg == 1)
	{
		cout << " (-1)";
	}
	else
	{
		cout << "";
	}
}

void charStats::printAgl()
{
	cout << agl;

	if (isAglPos == 1)
	{
		cout << " (+1)";
	}
	else if (isAglNeg == 1)
	{
		cout << " (-1)";
	}
	else
	{
		cout << "";
	}
}
void charStats::printInt()
{
	cout << inte;

	if (isIntPos == 1)
	{
		cout << " (+1)";
	}
	else if (isIntNeg == 1)
	{
		cout << " (-1)";
	}
	else
	{
		cout << "";
	}
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