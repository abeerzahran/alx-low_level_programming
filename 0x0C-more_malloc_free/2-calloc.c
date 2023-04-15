#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _calloc - calloc function
 * @nmemb: integer
 * @size: integer
 * Return: pointer or null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(size * nmemb);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
