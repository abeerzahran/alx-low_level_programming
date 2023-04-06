#include "main.h"

/**
 * is_prime - find if n is prime.
 * @n: integer
 * @i:integer
 * Return: return 1 0r 0.
 */

int is_prime(int n, int i)
{
	if (n % 2 == 0 || n == 1 || n < 0)
		return (0);
	if (n % i == 0 && i != n)
		return (0);
	if (i > (n / i))
		return (1);
	return (is_prime(n, i + 2));
}
/**
 * is_prime_number - return if n is prime.
 * @n: integer
 * Return: return 1 or 0.
 */
int is_prime_number(int n)
{
	int result = is_prime(n, 3);

	return (result);
}
