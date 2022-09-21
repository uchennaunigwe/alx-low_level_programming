#include <stdlib.h>
#include <string.h>
/**
 * _strcat - Join pointers
 * @dest: dest
 * @src: src
 * Return: joined string
 */

char *_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = strcat(dest, src);
	return (ptr);
}
