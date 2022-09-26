#include <stdlib.h>
#include <string.h>
/**
 * _strstr - Join pointers
 * @haystack: string
 * @needle: search character
 * Return: joined string
 */

char *_strstr(char *haystack, char *needle)
{
	char *ptr;

	ptr = strstr(haystack, needle);
	return (ptr);
}
