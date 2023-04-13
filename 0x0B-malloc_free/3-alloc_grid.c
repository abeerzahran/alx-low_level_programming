#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * alloc_grid - concatinate a 2 strings
 * @width: integer
 * @height: integer
 * Return: pointer or null
 */
int **alloc_grid(int width, int height)
{
	int i, a, b;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **) malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == NULL)
			return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			arr[a][b] = 0;
		}
	}
	return (arr);
}
