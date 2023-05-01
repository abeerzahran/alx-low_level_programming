#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *h;

	if (*head != NULL)
	{
		temp = *head;
		h = temp;
		while (h != NULL)
		{
			temp = temp->next;
			free(h);
			h = temp;
		}
		*head = NULL;
	}
}
