#include "main.h"
/**
 * swap_int - swaps the values of 2 intergers
 *
 *@a: first integer
 *@b: second integer
 *Return: 0 always
 */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
