#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Join pointers
 * @a: string
 */

void print_chessboard(char (*a)[8])
{
	int i, j;
	char c;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			c = a[i][j];
			_putchar (c);
		}
		putchar ('\n');
	}
}
