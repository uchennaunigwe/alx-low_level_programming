#include <string.h>
#include <stdio.h>
#include <stdio.h>
/**
 * rev_string - print  string
 * @c: string to print
 */

void rev_string(char *c)
{
	int len, i;
	char temp;

	len = strlen(c);
	for (i = len - 1; i >= len / 2; i--)
	{
		temp = *(c + i);
		*(c + i) = *(c + ((len - 1) - i));
		*(c + ((len - 1) - i)) = temp;
	}
}
