#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
  int n;
	listint_t *h;
  
	if(*head == NULL)
	{
		return (0);
	}
	h = *head;
	n = h->n;
	*head = h->next;
	return (n);
}
