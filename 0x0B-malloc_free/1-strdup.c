#include "main.h"
/**
 * _strdup - function that returns a pointer to a newly allocated space
 *  in memory, which contains a copy of the string given as a param
 *  @str: string
 *  Return: results
 */
char *_strdup(char *str)
{
	int i = 0;
	char *r;
	int size = 0;

	if (str == 0)
	{
		return (0);
	}

	r = (char *)malloc(sizeof(*str) * size + 1);

	if (r == 0)
		return (NULL);

	else
	{
		for (; i < size; i++)
			r[i] = str[i];
	}
	return (r);
}
