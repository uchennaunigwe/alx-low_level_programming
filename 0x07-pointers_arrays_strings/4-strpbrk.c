#include <stdlib.h>
#include <string.h>
/**
 * _strpbrk - Join pointers
 * @s: string
 * @accept: search character
 * Return: joined string
 */

char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	ptr = strpbrk(s, accept);
	return (ptr);
}
