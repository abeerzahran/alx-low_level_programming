#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * array_range - print the range
 * @min: integer
 * @max: integer
 * Return: pointer or null
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, j;

	if (min > max)
	return (NULL);
	arr = malloc(((max - min)  + 1) * sizeof(int));
	if (arr == NULL)
	return (NULL);
	for (i = min, j = 0; i <= max; i++, j++)
	{
		arr[j] = i;
	}
	return (arr);
}
