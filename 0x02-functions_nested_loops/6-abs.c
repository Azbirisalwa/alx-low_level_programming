#include "main.h"

/**
 * _abs - computes the absoute values of an integer
 * @i: int
 * Return: absolute value
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (i *= -1);
	}
	else if (i == 0)
	{
		return (i == 1);
	}
	else
	{
		return (i);
	}
}
