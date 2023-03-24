#include "main.h"
/**
 * print_line - print a line
 * @n: number of time the character is printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = -1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
