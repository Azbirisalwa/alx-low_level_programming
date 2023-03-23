#include "main.h"

/**
 * _islower - check if letter is lowercase
 * @c: The character in ASCII code
 * Return: return 1 if c is lowercase and 0 on anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('n');
}

