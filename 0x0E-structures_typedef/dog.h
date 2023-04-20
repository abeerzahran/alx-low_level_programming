#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct dog
 * @name: name of dog
 * @owner: owner name
 * @age: dog age
 * Description: struct called "dog" that stores its name, its age
 * and the name of its owner.
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);



#endif
