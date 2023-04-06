#include "main.h"
/**
 * _strlen_recursion - return legnth of string
 * @s: string
 * Return: always 0
 */
int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s != '\0')
	{
		return (i + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
