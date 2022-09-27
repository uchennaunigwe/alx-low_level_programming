#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdio.h>
/**
 * puts_half - print  string
 * @c: string to print
 */
void puts_half(char *c)
{
	int len, i, n;
	char temp;

	len = strlen(c);
	n = len / 2;
	for (i = 0; i < len / 2 ; i++)
	{
		temp = *(c + i + n);
		_putchar (temp);
	}
	_putchar ('\n');
}
