#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>

#endif
/**
 *main - Entrypoint
 *
 * Return: On sucess 1.
 * On failure, -1
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			if (i % 3 == 0)
			{
				printf("Fizz");
			}
			if (i % 5 == 0)
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
