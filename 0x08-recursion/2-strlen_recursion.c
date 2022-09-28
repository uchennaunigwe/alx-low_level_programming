#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strlen_recursion - Entry
 * @s: operand
 */

int _strlen_recursion(char *s)
{
	int len;

	len = strlen(s);

	if (len == 0)
	{
		return 0;
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
