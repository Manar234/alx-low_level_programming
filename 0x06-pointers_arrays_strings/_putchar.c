#include <unstd.h>

/**
 * _putchar: write the character c to stdio
 * @c: the charater to print
 *
 * Return: On success 1.
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
