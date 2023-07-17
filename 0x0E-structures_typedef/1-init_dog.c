#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: Parameter
 *
 * @name: Paramter
 *
 * @age: Parameter
 *
 * @owner: Parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = malloc(strlen(name + 1));
if (d->name != NULL)
{
strcpy(d->name, name);
}
d->age = age;
d->owner = malloc(strlen(owner + 1));
if (d->owner != NULL)
{
strcpy(d->owner, owner);
}
}
