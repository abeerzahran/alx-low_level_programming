#include "main.h"
/**
 * _memset - main function
 * @s: char
 * @b: char
 * @n: unsigned integer
 * Return: character
 */
char *_memset(char *s, char b, unsigned int n)
{
  int i = 0;


        for (; n > 0; i++)

        {

                s[i] = b;

                n--;

        }

        return (s);
}
