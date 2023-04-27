#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - add node
 * @head: first node
 * @str: string
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t i;
	list_t *new, *h;

	h = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	while (h != NULL)
	{
		h = h->next;
	}
	h = new;
	new->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		;
	new->len = i;
	new->next = NULL;

	return (*head);
}
