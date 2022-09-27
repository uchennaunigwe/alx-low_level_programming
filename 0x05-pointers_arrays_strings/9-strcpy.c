#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdio.h>
/**
 * _strcpy - print  string
 * @dest: array of int to print
 * @src: number of element to print
 * Return: Pointer to string
 */
char *_strcpy(char *dest, char *src)
{
	char *p;

	p = strcpy(dest, src);
	return (p);
}
