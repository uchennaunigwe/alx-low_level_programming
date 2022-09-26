#include <stdlib.h>
#include <string.h>
/**
 * _strchr - Join pointers
 * @s: string
 * @c: search character
 * Return: joined string
 */

char *_strchr(char *s, char c)
{
	char *ptr;

	ptr = strchr(s, c);
	return (ptr);
}
