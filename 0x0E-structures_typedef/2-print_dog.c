#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 *print_dog - struct dog
 *@x: item
 *
 *Return: void
 */
void print_dog(struct dog *x)
{
	if (x == NULL)
		return;

	if (x->name == NULL)
		x->name = "(nil)";

	if (x->owner == NULL)
		x->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", x->name, x->age, x->owner);
}
