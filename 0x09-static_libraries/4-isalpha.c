#include "main.h"
/**
 * _isalpha - the function.
 * @c: integer
 * Return: return integer.
 */
int _isalpha(int c)
{
  return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
