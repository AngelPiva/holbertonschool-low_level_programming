#include <stdlib.h>
#include "dog.h"

/**
*init_dog - initialize a variable of type struct dog
*@owner: owner
*@name: name
*@age: age
*@d: d
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
