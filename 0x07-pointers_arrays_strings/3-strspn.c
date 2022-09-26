#include <stdlib.h>
#include <string.h>
/**
 * _strspn - Join pointers
 * @s: string
 * @accept: search character
 * Return: joined string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int ptr;

	ptr = strspn(s, accept);
	return (ptr);
}
