// statTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include "charStats.h"

using namespace std;


char entry;
int counter = 0;
charStats newChar;
string newname;
bool menuflg = false;

int main()
{
	/*char entry;
	int counter = 0;
	charStats newChar;
	string newname;
	bool menuflg = false;*/
	system("color 2");
	cout << "\t\t======================\n";
	cout << "\t\tCREATURE MASTER (DEMO)";
	cout << "\n\t\t======================";
	cout << "\n\n\tHit \"enter\" after each key to navigate the menu.";
	cout << "\n\n\nPress 'Enter' to begin...";
	entry = getchar();
	system("CLS");

	do
	{
		do //name menu state
		{
			cout << "\t\t======================\n";
			cout << "\t\t\tNAME";
			cout << "\n\t\t======================\n\n";
			cout << "Name your character: ";
			cin >> newname;
			newChar.setName(newname);

			cout << "\nYour name is " << newChar.getName() << ", correct? (Y/N)\n";
			cin >> entry;

			if ((entry == 'y' || entry == 'Y'))
			{
				menuflg = true;
			}
			else
			{
				system("CLS");
			}

		} while (menuflg == false);

		system("CLS");
		menuflg = false;

		do //race menu state
		{
			cout << "\t\t======================\n";
			cout << "\t\t\tRACE";
			cout << "\n\t\t======================\n\n";
			cout << "Okay, " << newChar.getName() << "...";
			cout << "What race of creature are you?";
			cout << "\n\n\t(1) Cyclops (+1 Int, -1 End)";
			cout << "\n\n\t(2) Dragonoid (+1 Agl, -1 Str)";
			cout << "\n\n\t(3) Bugbear (+1 Str, -1 Int)\n";

			cin >> counter;

			switch (counter)
			{
			case 1: newChar.setRace(counter);
				cout << "\nYou've chosen the savage Cyclops\n";
				cout << "\nThe most humanoid of the three. it's quite";
				cout << "\nintelligent, and rightly feared for its";
				cout << "\nbarbaric consumption of humans. Their";
				cout << "\nbare flesh isn't very tough, though.";
				break;
			case 2: newChar.setRace(counter);
				cout << "\nYou've chosen the imposing Dragonoid\n";
				cout << "\nWithout all fours and without wings, the";
				cout << "\nDragonoid is neither noble nor galant.";
				cout << "\nTheir tough scales and quick movements";
				cout << "\nfrighten many a seasoned warrior.";
				break;
			case 3: newChar.setRace(counter);
				cout << "\nYou've chosen the mighty Bugbear\n";
				cout << "\nBoorish, quick to anger, and great";
				cout << "\nmuscularity all make the Bugbear";
				cout << "\nfearsome. Yet, their hides are as";
				cout << "\n hairy as their heads are empty!";
				break;
			}

			cout << "\n\nSo, " << newChar.getName() << " the " << newChar.getRace() << ", right? (Y/N)\n";
			cin >> entry;

			if ((entry == 'y') || (entry == 'Y'))
			{
				menuflg = true;
			}
			else
			{
				system("CLS");
			}

		} while (menuflg == false);

		system("CLS");
		menuflg = false;
		cout << "Aright " << newChar.getName() << " the " << newChar.getRace() << ", lets generate your stats..." << endl;
		system("pause");
		cout << "\n\nWould you like an explanation of the stats? (Y/N)";
		if ((entry == 'y' || entry == 'Y'))
		{
			system("CLS");

			//explanation menu
			do
			{
				cout << "\t\t======================\n";
				cout << "\t\t\tStats";
				cout << "\n\t\t======================\n\n";
				cout << "This game has four basic stats that determine your character's performance:";
				cout << "\n\n\t(1) Strength\n\t(2) Endurance\n\t(3) Agility\n\t(4) Intelligence";
				cout << "\n\nStats range from 1 (lowest) to 5 (highest). Don't worry if you roll a low stat!\nStats are subject to change throughout your journey.";
				cout << "\nHit any number to learn more about its respective stat, or hit 'Q' to quit and continue building your character.\n";
				cin >> entry;

				if ((entry == 'Q') || (entry == 'q'))
				{
					menuflg = true;
				}
				else if (entry == '1')
				{
					system("CLS");
					cout << "\t========STRENGTH========";
					cout << "\n\nStrength reflects your creature's overall raw power, and what they're capable of.";
					cout << "\n\tA 1 represents a weak creature, which is equal in strength to an average human.";
					cout << "\n\tA 3 represents a strong creature, which could just about press their own weight over their head.";
					cout << "\n\tA 5 represends a godbeast level of strength, where pressing twice their weight overhead is a possibility.";
					cout << "\n\n\t=========COMBAT=========";
					cout << "\n\nIn combat, this applies a damage bonus of +2 per level past level one, with a minimum of 0, and a maximum of +8.";
					cout << "\nThis is independent of your creature's natural weapon, such as claws, or a fashioned weapon, such as a tree club.";
					cout << "\n\n\t========OUT OF COMBAT========";
					cout << "\n\nOut of combat, strength determines what your character can lift, where it can climb and jump, what it can carry,";
					cout << "\nand what it can break. Finally, strength values affect your creature's apperance.";
					cout << "\nA freakishly muscled beast is more likely to intimidate foes than a soft or unimpressive one.\n\n";
					system("pause");
					system("CLS");
				}
				else if (entry == '2')
				{
					system("CLS");
					cout << "\t========ENDURANCE========";
					cout << "\n\nEndurance measures your creature's tolerance and fortitude against any element or condition,";
					cout << "\nsuch as sustained mobility, harsh weather, rigorous combat, or rough terrain.";
					cout << "\n\tA 1 represents an easily tired creature, to which the elements and daily rigors tire out quickly.";
					cout << "\n\tA 3 represents a hardy creature, which can stay active and resist damage longer than most other creatures.";
					cout << "\n\tA 5 represends a godbeast level of endurance, where no weakness in armor can be easily exploited, and";
					cout << "\n\tto where no stretch of land can dismay its journey.";
					cout << "\n\n\t=========COMBAT=========";
					cout << "\n\nWhile in combat, endurance determines how hard it is to tire out, injure,";
					cout << "\nor wound your creature. Starting at level 2, your creature earns a +2 to armor rating per level.";
					cout << "\nThis bonus is added on top of your creature's natural armor level, gotten from scales or tough hide.";
					cout << "\n\n\t========OUT OF COMBAT========";
					cout << "\n\nThe more endurance your creature has, the longer it can act before needing rest. Actions such as climbing,";
					cout << "\nswimming, jumping, walking, running, take less of an energy toll as endurance increases. Higher levels of";
					cout << "\nendurance mitigate the impact of weather conditions and old battle wounds.\n\n";
					system("pause");
					system("CLS");
				}
				else if (entry == '3')
				{
					system("CLS");
					cout << "\t========AGILITY========";
					cout << "\n\nAgility represents a creature's nimbleness, flexibility, and mobility capability.";
					cout << "\n\tA 1 represents an inflexible and graceless creature, easily thwarted by its own maneuvers.";
					cout << "\n\tA 3 represents a limber and able creature, capable of confounding the enemy.";
					cout << "\n\tA 5 represends a godbeast level of agility, who can seemingly contort and dart around the laws of Physics.";
					cout << "\n\n\t=========COMBAT=========";
					cout << "\n\nAgility helps a creature land precise attacks and evade, and also helps with natural defenses.";
					cout << "\nStarting at level 2, your creature earns a +2 to hit, and from level 3 onward, earns a +1 to armor";
					cout << "\nrating only in attacks against the joints.";
					cout << "\nThis bonus is added on top of your creature's natural agility level, from stockiness or natural pliability.";
					cout << "\n\n\t========OUT OF COMBAT========";
					cout << "\n\nAgility lends itself well in a creature's sureness of foot. Agility helps with silent maneuvering,";
					cout << "\nbalance in treacherous terrain, scaling difficult geography, and perhaps even squeezing into nooks and crannies.\n\n";
					system("pause");
					system("CLS");
				}
				else if (entry == '4')
				{
					system("CLS");
					cout << "\t========INTELLIGENCE========";
					cout << "\n\nIntelligence governs a creature's ability to reason with, rationalize, interpret, and comprehend its";
					cout << "\n\nsurroundings, situation, odds, and chances.";
					cout << "\n\tA 1 represents a dull, purely instinctual creature with a largely animal perspective of its mileau.";
					cout << "\n\tA 3 represents a creature of intellectual promise. Basic pattern recognition and little";
					cout << "\n\tphysiological and emotional self awareness can surface.";
					cout << "\n\tA 5 represends a godbeast level of intelligence, where human-levels of reasoning and emotional intelligence";
					cout << "\n\tand self-awareness come into play, for better or for worse. A cunning and quick beast, indeed.";
					cout << "\n\n\t=========COMBAT=========";
					cout << "\n\nIntelligence functions as an indirect source of options and observations in combat.";
					cout << "\nAt level 1, combat is simple, animalistic, and gets the job done. Some options, such as special maneuvers,";
					cout << "\nmay still become available over time. Level 2 grants basic observations, such as more detail of your enemy";
					cout << "\nor what sort of attack your creature suffered. Levels 3 and beyond paint clearer pictures of what your";
					cout << "\ncreature interprets and identifies, and with a high enough level, can exploit found weaknesses or even";
					cout << "\npick up on a pack's communication waves. The higher the level, the greater your creature's combat arsenal.";
					cout << "\nThere are no direct stat bonuses in combat, but rolls for learning and interpretation are more favorable.";
					cout << "\n\n\t========OUT OF COMBAT========";
					cout << "\n\nSharp intellect in a beast simply colors a complete picture of the surroundings.";
					cout << "\nIntelligence affects every and all actions. An intelligent creature will have the capacity to";
					cout << "\nmake observations about its surroundings, make use of found items, better measure its ability to";
					cout << "\nperform actions versus the terrain, express emotions, and even form thoughts and speculations.";
					cout << "\nThese can give better insight on your creature's health, and can keep it alive longer if heeded.\n\n";
					system("pause");
					system("CLS");
				}

			} while (menuflg == false);
		}

		//system("pause");
		menuflg = false;
		counter = 3;

		do
		{
			while ((counter >= 1) ^ (menuflg = false))
			{
				system("CLS");
				cout << "\t\t======================\n";
				cout << "\t\t\tStats";
				cout << "\n\t\t======================\n\n";
				cout << "Your stats:\n";

				newChar.genStats(); //roll numbers
				//roll numbers for each stat, assign values, print values:
				cout << setw(7) << right << "\tSTR: ";
				newChar.printStr();
				cout << setw(7) << right << "\n\tEND: ";
				newChar.printEnd();
				cout << setw(7) << right << "\n\tAGL: ";
				newChar.printAgl();
				cout << setw(7) << right << "\n\tINT: ";
				newChar.printInt();


				cout << "\nAre these stats okay? (Y/N) (Rolls remaining: " << (counter - 1) << "):\n\n";
				cin >> entry;

				if ((entry == 'y') || (entry == 'Y'))
				{
					menuflg = true;
					break;
				}
				else if ((entry == 'm') || (entry == 'M'))
				{
					// !! DEBUG !!
					menuflg = false;
				}
				else
				{
					counter--;
					system("CLS");
				}
			}

			menuflg = true;
			system("CLS");

		} while (menuflg == false);

		menuflg = false;

		//finalization menu
		cout << "\t\t======================\n";
		cout << "\t\t\tSummary";
		cout << "\n\t\t======================\n\n";
		cout << "Your Creature:\n";
		cout << "\n\tName: " << newChar.getName();
		cout << "\n\n\tRace: " << newChar.getRace();
		cout << setw(7) << right << "\n\n\tSTR: ";
		newChar.printStr();
		cout << setw(7) << right << "\n\tEND: ";
		newChar.printEnd();
		cout << setw(7) << right << "\n\tAGL: ";
		newChar.printAgl();
		cout << setw(7) << right << "\n\tINT: ";
		newChar.printInt();

		cout << "\n\nAre you sure you want to be a " << newChar.getRace() << " named " << newChar.getName() << "? (Y/N)\n\n";

		cin >> entry;

			if (entry == 'y' || entry == 'Y')
			{
				menuflg = true;
				break;
			}
			else if (entry == 'n' || entry == 'N')
			{
				cout << "\n!! Restarting character builder !!\n\n";
				newChar.~charStats(); //destroy data
				system("pause");
				menuflg = false;
				system("CLS");
			}

	} while (menuflg == false);

	newChar.saveGame();


	system("CLS");
	cout << "Demo complete. Coming soon: ";
	cout << "\n\t+ Ability to save created creature";
	cout << "\n\t+ Redo genStats() to produce single values instead of array (X)";
	cout << "\n\t+ Implement total character redo at end of creation (X)\n\n";
	system("pause");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
