#pragma once
#include <string>

using namespace std;

class charStats
{
	public:
		void setStr(int r[4]);
		void setEnd(int r[4]);
		void setAgl(int r[4]);
		void setInt(int r[4]);
		void setName(string name);
		void setRace(int race);
		int getStr();
		int getEnd();
		int getAgl();
		int getInt();
		void genStats();
		string getName();
		string getRace();
	private:
		int str = 0;
		int end = 0;
		int agl = 0;
		int inte = 0;
		string name;
		string race;
};

