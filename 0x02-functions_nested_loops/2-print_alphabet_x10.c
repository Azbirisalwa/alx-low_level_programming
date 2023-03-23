#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 times
 */

void print_alphabet_x10(void)
{
	int i;

	i = 0;

	while (i != 10)
	{
		char x;

		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		i++;
	}
}
