#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print list
 *
 * @h: single linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n;

	n = 1;
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] (%s)\n", h->len, h->str);
	}
	while (h->next == NULL)
	{
		return (n);
	}
	return (n + print_list(h->next));
}
