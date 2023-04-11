#include "main.h"
/**
 * _isalpha - function that checks alphabetical characters
 *
 * @c: output of data
 *
 * Return: return 1 is alphabet and else 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
