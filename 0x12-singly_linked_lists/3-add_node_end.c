#include "lists.h"
/**
 * add_node_end - function that adds a new node at the
 * end of a list_t list.
 * @head: pointer for first element
 * @str: string
 * Return: the address of the new element,
 * or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!head || !new)
		return (NULL);
	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		list_t *end = *head;

		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = new;
	}
	return (new);
}
