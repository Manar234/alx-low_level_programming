#include "variadic_functions.h"
/**
 * print_numbers - print numbers
 * @separator: is the string to be printed between numbers
 * @...: the arguments
 * @n: number of integers passed to the function
 * Return: the numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(args);
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
