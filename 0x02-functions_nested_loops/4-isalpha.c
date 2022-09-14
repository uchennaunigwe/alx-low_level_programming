#ifndef HEADER_FILE
#define HEADER_FILE

#include <ctype.h>
#include "main.h"

#endif
/**
 * _islower - Entrypoint
 * @c: Evaluated value
 *
 * Return: On sucess 1.
 * On failure, -1
 */
int _isalpha(int c)
{
	int r;

	r = isalpha(c);
	if (r == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
