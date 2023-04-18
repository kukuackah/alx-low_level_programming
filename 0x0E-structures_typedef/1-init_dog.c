#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - dog struct
 * @name: variable name
 * @age: variable age
 * @owner: variable owner
 * @x: pointer
 */
void init_dog(struct dog *x, char *name, float age, char *owner)
{
	if (x == NULL)
		x = malloc(sizeof(struct dog));
	x->name = name;
	x->age = age;
	x->owner = owner;
}
