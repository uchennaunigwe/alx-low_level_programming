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
	char al;

	ch = 0;
	al = 'a';
	do {
		putchar (ch + '0');
		ch++;
	} while (ch <= 9);
	do {
		putchar (al);
		al++;
	} while (al <= 'f');
	putchar ('\n');
	return (0);
}
