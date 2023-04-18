#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new type
 * @age: variable age of float type
 * @name: variable name of char type
 * @owner: variable owner of char
 * Return: always 0
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
typedef dog dog_t;
void init_dog(struct dog *x, char *name, float age, char *owner);
void print_dog(struct dog *x);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *x);
#endif /*TYPEF*/
