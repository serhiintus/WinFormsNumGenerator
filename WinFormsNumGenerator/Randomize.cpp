#include"Randomize.h"

int randomize()
{
	return (rand() % 99) + 1;
}

bool verifyNum(int num, int tab[], int count)
{
	if (count < 1)
		return true;
	for (int i = 0; i < count; i++)
	{
		if (num == tab[i])
			return false;
	}
	return true;
}
