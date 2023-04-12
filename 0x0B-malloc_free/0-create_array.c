#include "main.h"
#include <stdlib.h>
/**
 * create_array - array of chars
 * @c: character
 * @size: array size
 * Return: a string
 */
char *create_array(unsigned int size, char c)
{
	char *sent;
	unsigned int i;

	sent = malloc(sizeof(char) * size);
	if (size == 0 || sent == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		sent[i] = c;
	return (sent);
}
