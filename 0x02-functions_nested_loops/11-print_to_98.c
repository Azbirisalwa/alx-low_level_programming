#include "main.h"
#include <stdio.h>
#include "main.h"


/**
 * print_to_98 - prints all natural numbers from n to 98 followed by a newline.
 * @n: integer.
 * Return: numbers printed
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */

void print_to_98(int n)
{
	if (n > 98)
	int i, j;

	if (n <= 98)
	{
	for ( ; n > 98; n--)
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", n);
			if (i != 98)
			printf("%d, ", i);
			else if (i == 98)
			printf("%d\n", i);
		}
	}
	else if (n < 98)
	} else if (n >= 98)
	{
		for (; n < 98; n++)
		for (j = n; j >= 98; j--)
		{
			printf("%d, ", n);
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\n", j);
		}
	}
	printf("%d\n", n);
}
