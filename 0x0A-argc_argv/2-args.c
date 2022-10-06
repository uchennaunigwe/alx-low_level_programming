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
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
