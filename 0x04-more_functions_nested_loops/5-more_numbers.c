#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
	int ch ;
	int num = 10;

	while (num--)
	{
		for (ch = 0; ch <= 14; ch++)
		{
			if (ch > 9)
				_putchar('0' + (ch / 10));
			_putchar('0' + (ch % 10));
		}
		_putchar('\n');
	}
}
