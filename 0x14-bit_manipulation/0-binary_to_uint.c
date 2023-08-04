#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * strlength- caculate length of string
 * @b: input string.
 * Return: length
 */
unsigned int strlength(const char *b)
{
	unsigned int count = 0;

	while (*b != '\0')
	{
		count++;
		b++;
	}
	return (count);
}
/**
 * revstr- reverse binary
 * @b: input string.
 * Return: string
 */
char *revstr(const char *b)
{
	int i;
	unsigned int len = strlength(b);
	char *str = malloc(sizeof(char) * 100);

	if (str == NULL)
	{
		return (0);
	}

	for (i = len - 1; i >= 0; i--)
	{
		str[len - i - 1] = b[i];
	}
	str[len] = '\0';
	return (str);

}
/**
 * binary_to_uint- convert binary to decimal
 * @b: input string.
 * Return: number.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int base = 1;
	unsigned int sum = 0;
	char *str = revstr(b);

	while (str[i] != '\0')
	{
		if (str[i] == '1')
		{
			sum += base;
			base *= 2;
		}
		else if (str[i] == '0')
		{
			base *= 2;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (sum);
}
