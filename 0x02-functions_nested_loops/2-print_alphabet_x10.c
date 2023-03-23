#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - main function
 * Description: function to print alphabetx10
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int num = 10;
	char i;

	while (num--)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
