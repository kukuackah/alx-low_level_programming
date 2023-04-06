#include "main.h"
/**
 * _pow_recursion - power function
 * @x: integer first
 * @y: integer second
 * Return: always 0
 */
int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y > 0)
		{
			return (x * _pow_recursion(x, y - 1));
		}
		else
		{
			return (1);
		}
	}
	else
	{
		return (-1);
	}
}
