#include "main.h"

/**
 * _abs - function that computes the absolute
 *       value of an integer
 *
 * @i: take input valaues for the function
 *
 * Return: Always 0 (Success)
*/

int _abs(int i)
{
	if (i < 0)
	{

		return (-1 * i);
	}
	else
	{
		return (i);
	}
}
