#include<stdio.h>
/**
 * main -main function
 *
 * Return: always 0
 */

int main(void)
{
	int c;
	int i = 44;
	int u = 32;

	for (c = 0; c < 10 ; c++)
	{
		putchar(c + 48);
		if (c < 9)
		{
			putchar(i);
			putchar(u);
		}
	}
	putchar('\n');
	return (0);
}
