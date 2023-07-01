#include "lists.h"
/**
 * list_len -  function that returns the number
 * of elements in a linked list_t list.
 * @h: pointer for the first node
 * Return: results
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
