#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiplies two numbers.
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n = 1, i = 0;

	for (i = 1; i < argc; i++)
	{
	int x = atoi(argv[i]);

	n *= x;
	}
	if (n == 1)
	{
		printf("Error\n");
	}
	else
	{
	printf("%d\n", n);
	}
	return (0);
}
