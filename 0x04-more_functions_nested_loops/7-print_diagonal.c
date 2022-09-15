#ifndef HEADER_FILE
#define HEADER_FILE

#include "main.h"

#endif
/**
 * print_diagonal - Entrypoint
 * @n: number of lines to draw
 * Return: On sucess 1.
 * On failure, -1
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
