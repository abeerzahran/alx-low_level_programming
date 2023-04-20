#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "dog.h"
/**
 * print_dog - print struct dog
 * @d: struct dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age <= 0)
			printf("Age: (nil)\n");
		else
			printf("Age: %.6f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
