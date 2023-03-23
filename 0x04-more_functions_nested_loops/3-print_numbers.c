#include "main.h"
/**
 * print_numbers - print numbers 0 to 9
 * Return: not 0 but void
 */

void print_numbers(void)
{
	char c;

	for (c = '0' ; c <= '9' ; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
