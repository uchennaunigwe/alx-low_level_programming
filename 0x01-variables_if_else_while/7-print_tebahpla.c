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

	ch = 'z';
	do {
		putchar (ch);
		ch--;
	} while (ch >= 'a');
	putchar ('\n');
	return (0);
}
