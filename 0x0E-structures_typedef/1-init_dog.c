#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - dog struct
 * @d: strct pointer
 * @name: name string
 * @owner: owner string
 * @age: integer
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}
