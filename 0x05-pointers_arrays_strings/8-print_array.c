#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdio.h>
/**
 * print_array - print  string
 * @a: array of int to print
 * @n: number of element to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
