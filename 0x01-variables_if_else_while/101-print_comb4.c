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
	int i, j, k, c;

	i = 0;
	c = 0;
	do {
		j = 0;
		do {
			k = 0;
			do {
				if ((i < j) && (j < k))
				{
					putchar (i + '0');
					putchar (j + '0');
					putchar (k + '0');
					if (c < 119)
					{
						putchar (',');
						putchar (' ');
					}
					c++;
				}
				k++;
			} while (k <= 9);
			j++;
		} while (j <= 9);
		i++;
	} while (i <= 9);
	putchar ('\n');
	return (0);
}
