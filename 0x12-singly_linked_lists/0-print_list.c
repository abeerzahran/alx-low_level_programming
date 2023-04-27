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

	if (h != NULL)
	{
		n = 1;
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] (%s)\n", h->len, h->str);
		}
		if (h->next == NULL)
		{
			return (1);
		}
		return (n + print_list(h->next));
	}
	return (n);
}
