#include <stdlib.h>
#include <string.h>
/**
 * _memcpy - Join pointers
 * @dest: dest
 * @src: src
 * @n: n
 * Return: joined string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr;

	ptr = memcpy(dest, src, n);
	return (ptr);
}
