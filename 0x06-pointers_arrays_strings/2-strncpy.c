#include <stdlib.h>
#include <string.h>
/**
 * _strncpy - Join pointers
 * @dest: dest
 * @src: src
 * @n: n
 * Return: joined string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr;

	ptr = strncpy(dest, src, n);
	return (ptr);
}
