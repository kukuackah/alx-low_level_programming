#include "main.h"
/**
 *print_sign - function that prints signs
 *
 *@n: function output
 *
 *Return: 1, 0 and -1 depending on condition
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('o');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
