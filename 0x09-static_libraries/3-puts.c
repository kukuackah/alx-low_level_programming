#include "main.h"
/**
 * _puts - printing a string
 *@str: var
 * Return: length of the string
 */
void _puts(char *str)
{
	int i;
	char c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		_putchar(c);
		i++;
	}
	_putchar('\n');
}
