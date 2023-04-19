#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: a name of a person
 * @f: the printing function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
