#include "lists.h"
/**
 * listint_len - function that prints all the elements of a listint_t list.
 * @h: pointer for a first element
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t temp = 0;

	while (h != NULL)
	{
		h = h->next;
		temp++;
	}
	return (temp);
}
