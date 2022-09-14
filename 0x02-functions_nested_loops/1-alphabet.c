#ifndef HEADER_FILE
#define HEADER_FILE

#include "main.h"

#endif
/**
 * main - Entrypoint
 * Return: Always 0 (sucess)
 */
void print_alphabet(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
