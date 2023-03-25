#include "main.h"

/**
 * print_square - prints hashes squares.
 * @n: size of the square.
 * Return: no return.
 */
void print_square(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
