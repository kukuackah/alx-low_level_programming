#include "main.h"
/**
* positive_or_negative - checks
*
*@i: the number to be checked
*Return: always 0
*/

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else if (i > 0)
		printf("%d is positive", i);
	else
		printf("%d is zero", i);
}
