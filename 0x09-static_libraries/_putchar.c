#include "main.h"
#include <unistd.h>
/**
 * _putchar - print char.
 * @c: character
 * Return: character.
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
