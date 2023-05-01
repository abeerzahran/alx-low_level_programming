#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *h;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	h = *head;
	new->n = n;
	new->next = NULL;
	if(*head == NULL)
	{
		*head = new;
		h = *head;
	}
	else
	{
		while (h != NULL)
		{
			h = h->next;
		}
		h = new;
	}
	return (h);
}
