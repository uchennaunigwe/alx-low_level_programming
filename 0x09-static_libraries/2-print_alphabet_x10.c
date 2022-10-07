#ifndef HEADER_FILE
#define HEADER_FILE

#include "main.h"

#endif
/**
 * print_alphabet_x10 - Entrypoint
 * Return: Always 0 (sucess)
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
