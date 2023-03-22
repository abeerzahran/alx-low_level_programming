#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char st[] = "_putchar";
	int i = 0;
	
	while (st[i] != '\0')
	{
		_putchar(st[i]);
		i++;
	}
	_putchar(10);
	
	return (0);
}
