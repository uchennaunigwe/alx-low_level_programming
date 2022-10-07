#ifndef HEADER_FILE
#define HEADER_FILE

#include "main.h"

#endif
/**
 * more_numbers - Entrypoint
 *
 * Return: On sucess 1.
 * On failure, -1
 */
void more_numbers(void)
{
	int i, j, t, u;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			t = j / 10;
			u = j % 10;
			if (t != 0)
			{
				_putchar(t + '0');
			}
			_putchar(u + '0');
		}
		_putchar('\n');
	}

}
