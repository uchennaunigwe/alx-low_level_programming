#include <stdlib.h>
#include <string.h>
/**
 * _memset - Join pointers
 * @s: dest
 * @b: src
 * @n: n
 * Return: joined string
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr;

	ptr = memset(s, b, n);
	return (ptr);
}
