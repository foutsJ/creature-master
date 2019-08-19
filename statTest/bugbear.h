#pragma once
#include "charStats.h"
class bugbear : public charStats
{
public:
	void setStr(int nstr);
	void setInt(int nint);
	friend int getStr();
	friend int getInt();
private:
};

