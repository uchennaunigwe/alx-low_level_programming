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
	if ((argc >= 1) && (sizeof(argv[0]) > 0))
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
