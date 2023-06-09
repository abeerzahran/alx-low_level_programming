#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, power = 1, sum = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	while (i--)
	{
		if (b[i] == '1')
		{
			sum += power;
		}
		power *= 2;
	}
	return (sum);
}
