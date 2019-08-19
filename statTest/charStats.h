#pragma once
#include <string>

using namespace std;

class charStats
{
	public:
		~charStats();
		void setStr(int);
		void setEnd(int);
		void setAgl(int);
		void setInt(int);
		void setName(string name);
		void setRace(int race);

		int getStr();
		int getEnd();
		int getAgl();
		int getInt();

		void genStats();
		void printStr();
		void printEnd();
		void printAgl();
		void printInt();
		
		string getName();
		string getRace();

		void saveGame();
	private:
		string name;
		string race;
		bool isStrPos = 0;
		bool isStrNeg = 0;
		bool isEndPos = 0;
		bool isEndNeg = 0;
		bool isAglPos = 0;
		bool isAglNeg = 0;
		bool isIntPos = 0;
		bool isIntNeg = 0;
	protected:
		int raceflg = 0;
		int str = 0;
		int end = 0;
		int agl = 0;
		int inte = 0;
};

