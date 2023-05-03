#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: no return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *s = separator;

	if (s == NULL)
	{
		s = "";
	}

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", va_arg(valist, int));
		}
		else
			printf("%d%s", va_arg(valist, int), s);
	}
	printf("\n");
	va_end(valist);
}
