#include "main.h"

/**
 * print_last_digit - print last digit of a number.
 *
 * @i: takes number input
 *
 * Return: Always 0 (Success)
*/

int print_last_digit(int i)
{
	int x;

	if (i < 0)
	{
		i = -1 * i;
	}
	x = i % 10;
	_putchar('0' + x);
	return (x);
}
