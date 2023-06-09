#include "lists.h"
/**
 * _strlen - return the lenght of string
 * @c: the string
 * Return: results
 */
int _strlen(char *c)
{
	int i = 0;

	if (!c)
	{
		return (0);
	}
	while (*c++)
	{
		i++;
	}
	return (i);
}
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer for the first node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
