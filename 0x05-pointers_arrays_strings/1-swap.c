#include <stdlib.h>
#include <string.h>
/**
 * swap_int - swap
 * @a: a
 * @b: b
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
