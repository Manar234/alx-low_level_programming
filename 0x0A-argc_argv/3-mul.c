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
	int n = 0, i = 0;

	for (i = 0; i < argc; i++)
	{
	int x = atoi(argv[i]);

	n += x;
	}
	printf("%d\n", n);
	return (0);
}
