#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		for (m = 48; m <= 57; m++)
		{
			putchar(n);
			putchar(m);
		}	int f;
	int s;

	for (f = 0; f < 10; f++)
	{
		for (s = f + 1; s < 10; s++)
		{
			putchar(48 + f);
			putchar(48 + s);
			if (f == 8 && s == 9)
			{}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	}
	return (0);
}
