#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the
 * nth node of a listint_t linked list.
 * @head: pointer for first element
 * @index: int
 * Return: results
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len = 0;
	listint_t *ptr = head;

	for (; ptr && len < index; ptr = ptr->next, len++)

		;
	return (ptr);
}
