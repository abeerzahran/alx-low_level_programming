#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _strdup - duplicate a string
 * @str: string
 * Return: pointer or null
 */

char *_strdup(char *str)
{
	char *st;
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;
	if (str == NULL)
		return (NULL);
	st = (char *)malloc((i + 1) * sizeof(char));
	if (st == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		st[j] = str[j];
	}
	return (st);
}
