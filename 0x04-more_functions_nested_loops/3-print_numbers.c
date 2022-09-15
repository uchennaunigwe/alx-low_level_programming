#ifndef HEADER_FILE
#define HEADER_FILE

#include "main.h"

#endif
/**
 * print_numbers - Entrypoint
 * @a: value 1
 * @b: value 2
 *
 * Return: On sucess 1.
 * On failure, -1
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
