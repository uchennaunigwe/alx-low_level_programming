#include <stdlib.h>
/**
 * create_array - prints buffer in hexa
 * @size: the address of memory to print
 * @c: the size of the memory to print
 *
 * Return: pointer.
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
