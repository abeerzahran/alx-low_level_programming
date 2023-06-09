#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * str_concat - concatinate a 2 strings
 * @s1: string
 * @s2: string
 * Return: pointer or null
 */
char *str_concat(char *s1, char *s2)
{
	char *st;
	unsigned int siz1, siz2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (siz1 = 0; s1[siz1] != '\0'; siz1++)
		;
	for (siz2 = 0; s2[siz2] != '\0'; siz2++)
		;
	st = malloc((siz1 + siz2 + 1) * sizeof(char));
	if (st == NULL)
	{
		free(st);
		return (NULL);
	}
	for (i = 0; i < siz1; i++)
	{
		st[i] = s1[i];
	}
	for (j = 0; j <= siz2; i++, j++)
	{
		st[i] = s2[j];
	}
	return (st);
}
