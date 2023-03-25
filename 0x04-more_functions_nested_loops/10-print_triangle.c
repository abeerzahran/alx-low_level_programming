#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: numbers of lines.
 * Return: no return.
 */
void print_triangle(int size)
{
	int i, j;
	int space = size - 1;
	int hash = 1;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < space; j++)
		{
			_putchar(' ');
		}
		space--;
		for (j = 0; j < hash; j++)
		{
			_putchar('#');
		}
		hash++;
		if (i < size - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
