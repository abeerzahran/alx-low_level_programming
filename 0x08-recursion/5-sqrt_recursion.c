#include "main.h"

/**
 * find_sqrt - find the sqrt of n.
 * @n: integer
 * @i:integer
 * Return: return sqrt.
 */

int find_sqrt(int n, int i)
{
	if (((double)n / i) == i)
		return (i);
	if (i > (n / i))
		return (-1);
	find_sqrt(n, i + 1);
}
/**
 * _sqrt_recursion - return the sqrt of n.
 * @n: integer
 * Return: return sqrt.
 */
int _sqrt_recursion(int n)
{
	int result = find_sqrt(n, 1);

	if (result == -1)
		return (-1);
	return (result);
}
