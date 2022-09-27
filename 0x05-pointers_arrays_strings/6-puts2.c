#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdio.h>
/**
 * puts2 - print  string
 * @c: string to print
 */

void puts2(char *c)
{
	int len, i;
	char temp;

	len = strlen(c);
	for (i = 0; i < len ; i = i + 2)
	{
		temp = *(c + i);
		_putchar (temp);
	}
	_putchar ('\n');
}
