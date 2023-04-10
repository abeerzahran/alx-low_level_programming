#include "main.h"
/**
 * _memcpy - a function.
 * @dest: char
 * @src:char
 * @n: integer
 * Return: return char.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
  int r = 0;

        int i = n;


        for (; r < i; r++)

        {

                dest[r] = src[r];

                n--;

        }

        return (dest);
}
