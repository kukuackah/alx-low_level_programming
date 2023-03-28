#include "main.h"
/**
 * _strlen - length of string
 * @s: the variable
 * Return: 0 always
 */
int _strlen(char *s)
{
	int a = 0; /* start of the counter from 0 */

	for (; *s++;)
		s++;
	return (a);
}
