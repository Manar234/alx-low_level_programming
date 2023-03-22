#include<stdio.h>
/**
 * print_alphabets - utilizes on the _putchar function to print
 *                    the alphabets a - z
 */

void print_alphabets(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
	putchar('\n');
}
