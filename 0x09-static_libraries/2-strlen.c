#include "main.h"
/**
 * _strlen - the function.
 * @s: char
 * Return: return integer.
 */
int _strlen(char *s)
{
  int longi = 0;


        while (*s != '\0')

        {

                longi++;

                s++;

        }


        return (longi);
}
