#include "main.h"

/**
 * _strlen_recursion - print length of string.
 * @s: string
 * Return: length.
 */
int _strlen_recursion(char *s)
{
	int i = 1, result;

	if (*s == '\0')
		return (0);

	result = i + _strlen_recursion(s + 1);
	return (result);
}
