#include "main.h"
/**
 * _strlen - length of string
 * @s: the variable
 * Return: 0 always
 */
int _strlen(char *s)
 {
 	int size;

 	size = 0;
 	while (s[size])
 	{
 		size++;
 	}

 	return (size);
 }
