#include "lists.h"
/**
 * pop_listint - function that deletes the
 * head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer for the first element
 * Return: returns the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int d;
	listint_t *ptr;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
	ptr = *head;
	d = ptr->n;
	*head = ptr->next;
	free(ptr);
	return (d);
	}
}
