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
	int ch;

	ch = 0;
	do {
		putchar (ch + '0');
		if (ch != 9)
		{
			putchar (',');
			putchar (' ');
		}
		ch++;
	} while (ch <= 9);
	putchar ('\n');
	return (0);
}
