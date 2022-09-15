#ifndef HEADER_FILE
#define HEADER_FILE

#include "main.h"

#endif
/**
 * print_line - Entrypoint
 *
 * Return: On sucess 1.
 * On failure, -1
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
