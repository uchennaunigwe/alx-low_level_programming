#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * print_diagsums - Join pointers
 * @a: string
 * @size: search character
 * Return: joined string
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2, u1, u2;
	int *d1, *d2;

	sum1 = 0;
	sum2 = 0;
	u1 = 0;
	u2 = 0;
	for (i = 0; i < size; i++)
	{
		d1 = a + (i * size + i);
		d2 = a + (i * size + (size - 1 - i));
		sum1 = sum1 + *d1;
		sum2 = sum2 + *d2;
	}
	do
	{
		u1 = sum1 % 10;
		sum1 = sum1 / 10;
		_putchar (u1);
	} while (sum1 > 0);
	_putchar (',');
	do
	{
		u2 = sum2 % 10;
		sum2 = sum2 / 10;
		_putchar (u2);
	} while (sum2 > 0);
	_putchar ('\n');

}
