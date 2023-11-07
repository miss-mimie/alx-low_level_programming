#include "dog.h"

/**
 * init_dog - this initializes the variable in struct dog.
 * @d: this is the struct dog.
 * @name: this is the name of the dog.
 * @age: this is the name of the dog.
 * @owner: this is the owner of the dog.
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
