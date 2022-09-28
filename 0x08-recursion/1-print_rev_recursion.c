#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _print_rev_recursion - Entry
 * @s: operand
 */

void _print_rev_recursion(char *s)
{
	char c;
	int len;

	c = *(s + 0);
	len = strlen(s);

	if (len == 0)
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(c);
	}
}
