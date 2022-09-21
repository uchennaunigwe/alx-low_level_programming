#include <stdlib.h>
#include <string.h>
/**
 * _strncat - Join pointers
 * @dest: dest
 * @src: src
 * @n: n
 * Return: joined string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr;

	ptr = strncat(dest, src, n);
	return (ptr);
}
