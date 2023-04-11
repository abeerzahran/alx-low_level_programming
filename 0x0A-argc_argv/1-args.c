#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - prints argv
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}

