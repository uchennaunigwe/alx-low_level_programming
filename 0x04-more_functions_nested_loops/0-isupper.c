#ifndef HEADER_FILE
#define HEADER_FILE

#include <ctype.h>
#include "main.h"

#endif
/**
 * _isupper - Entrypoint
 * @c: Evaluated value
 *
 * Return: On sucess 1.
 * On failure, -1
 */
int _isupper(int c)
{
	int r;

	r = isupper(c);
	if (r == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
