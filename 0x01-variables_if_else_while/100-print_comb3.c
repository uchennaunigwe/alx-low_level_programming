#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int i, j, c;

	i = 0;
	c = 0;
	do {
		j = 0;
		do {
			if (i < j)
			{
				putchar (i + '0');
				putchar (j + '0');
				if (c < 44)
				{
					putchar (',');
					putchar (' ');
				}
				c++;
			}
			j++;
		} while (j <= 9);
		i++;
	} while (i <= 9);
	putchar ('\n');
	return (0);
}
