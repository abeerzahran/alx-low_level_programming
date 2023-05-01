#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a list.
 * @head: a list that enters to the function.
 */
void free_listint(listint_t *head)
{
	listint_t *h;

	h = head;
	while (h != NULL)
	{
		head = head->next;
		free(h);
		h = head;
	}
}
