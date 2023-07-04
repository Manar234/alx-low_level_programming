#include"lists.h"
/**
 * add_nodeint - add a node at begin
 * @head: pointer to first element
 * @n: data
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;

	*head = ptr;
	return (ptr);
}

