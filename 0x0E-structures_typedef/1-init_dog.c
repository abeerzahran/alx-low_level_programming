#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "dog.h"
/**
 * init_dog - initial struct dog
 * @d: struct dog
 * @name: name of dog
 * @owner: owner name
 * @age: dog age
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->owner = owner;
	d->age = age;
}
