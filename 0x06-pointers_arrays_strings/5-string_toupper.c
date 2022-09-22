#include <ctype.h>
#include <string.h>
#include <stdio.h>
/**
 * string_toupper - Join pointers
 * @c: dest
 * Return: c
 */

char *string_toupper(char *c)
{
	int i, n;

	n = strlen(c);
	for (i = 0; i < n; i++)
	{
		c[i] = toupper(c[i]);
	}
	return (c);
}
