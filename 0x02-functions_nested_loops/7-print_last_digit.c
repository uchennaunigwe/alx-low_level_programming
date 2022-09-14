#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdlib.h>
#include "main.h"

#endif
/**
 * print_last_digit - Entrypoint
 * @n: Evaluated value
 *
 * Return: On sucess 1.
 * On failure, -1
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	r = abs(r);
	_putchar(r + '0');
	return (r);
}
