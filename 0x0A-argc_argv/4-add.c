#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - Entry
 * @argc: operand
 * @argv: power
 * Return: Me
 */

int main(int argc, char *argv[])
{
	int i, mul;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) > 0)
			{
				mul = mul + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
