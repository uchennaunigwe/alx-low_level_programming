#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * factorial - Entry
 * @n: operand
 * Return: Me
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
