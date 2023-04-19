#include "calc.h"

/**
 * op_add - adds two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: add.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: sub.
 */
int op_sub(int a, int b)
{
	if (a > b)
		return (a - b);
}
/**
 * op_mul - mul two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: mul.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: div.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - mod of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: mod.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
