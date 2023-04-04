#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring.
 *  @haystack: string.
 *  @needle: string.
 *  Return: pointer to the beginning of the located substring, or a NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *begin = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		if (!*pattern)
			return (begin);
		haystack = begin + 1;
	}
	return (NULL);
}
