#include "main.h"
/**
 * _sqrt - square root
 * @i: number
 * @n: number
 * Return: number
 */

int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - recursion square root
 * @n: number
 * Return: a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
