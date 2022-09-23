#include <string.h>
#include <stdio.h>
#include <stdio.h>
/**
 * print_rev - print  string
 * @c: string to print
 */

void print_rev(char *c)
{
	int len, i;

	len = strlen(c);
	for (i = len - 1; i >= 0; i--)
	{
		putchar(*(c + i));
	}
	putchar('\n');
}
