#include "main.h"
/**
 * factorial - Return factorial
 * @int: integer number
 * Return: integer
 */
int factorial(int)
{
	if (n > 0)
	{
		if (n >= 1)
		{
		return (n * factorial(n - 1));
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
