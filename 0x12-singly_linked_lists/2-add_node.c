#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - add node
 * @head: first node
 * @str: string
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t i;
	list_t *new;

	new = malloc(sizeof(list_t));
	if(new == NULL)
	{
		free (new);
		return (NULL);
	}
	if (*head != NULL)
	{
		new->next = *head;
	}
	else
		new->next = NULL;
	
	new->str = strdup(str);
	
	for (i = 0; str[i] != '\0'; i++)
		;
	*head = new;
	new->len = i;

	return (*head);
}
