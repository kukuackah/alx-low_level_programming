#include "main.h"
/**
 * prime_num - prime integer
 * @i: number 1
 * @j: integer 2
 * Return: always 0
 */

int prime_num(int i, int j)
{
	if (j < i)
	{
		if (i % j == 0)
		{
			return (0);
		}
		else
		{
			return (prime_num(i, j + 1));
		}
	}
	else
	{
		return (1);
	}
}
/**
 * is_prime_number - says if it is a prime number or not
 * @n: integer
 * Return: 1 for integer
 */

int is_prime_number(int n)
{
	if (n > 3)
	{
		return (prime_num(n, 2));
	}
	else if (n > 2)
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
