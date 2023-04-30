#include "lists.h"
/**
 * listint_len - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{

		h = h->next;
		nelem++;
	}
	return (nelem);
}
