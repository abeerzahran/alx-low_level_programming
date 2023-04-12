#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * create_array - create an array
 * @size: size of the array
 * @c: char
 * Return: pointer or null
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	int i;

	if (size == 0)
		return (NULL);

	cr = malloc(size * sizeof(c));
	if (cr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		cr[i] = c;
	}
	return (cr);
}
