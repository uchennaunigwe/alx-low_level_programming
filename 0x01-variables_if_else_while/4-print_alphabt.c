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
	char ch;

	ch = 'a';
	do {
		if ((ch != 'q') && (ch != 'e'))
		{
			putchar (ch);
		}
		ch++;
	} while (ch <= 'z');
	putchar ('\n');
	return (0);
}
