#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int c = 0;

	if (n == 0 && index == 0)
	{
		return (0);
	}
	while (n)
	{
		if (c == index)
		{
			return (n & 1);
		}
		n = n >> 1;
		c++;
	}
	return (-1);
}
