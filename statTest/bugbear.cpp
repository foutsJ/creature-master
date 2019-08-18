#include "bugbear.h"
#include <iostream>

void bugbear::setStr(int nstr)
{
	if (nstr < 5)
	{
		nstr += 1;
		std::cout << "\nBonus applied (STR)";
	}

	str = nstr;
}

void bugbear::setInt(int nint)
{
	if (nint> 1)
	{
		nint -= 1;
		cout << "\nNegative applied (INT)";
	}

	inte = nint;
}
