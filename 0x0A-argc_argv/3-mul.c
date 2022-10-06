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
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
