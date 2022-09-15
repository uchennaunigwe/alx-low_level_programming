#ifndef HEADER_FILE
#define HEADER_FILE

#include "main.h"

#endif
/**
 * print_triangle - Entrypoint
 * @n: number of lines to draw
 * Return: On sucess 1.
 * On failure, -1
 */
void print_triangle(int n)
{
	int i, j, k;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n - i; j++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
