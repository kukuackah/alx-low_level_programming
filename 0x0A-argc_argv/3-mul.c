#include <stdio.h>
#include "main.h"
/**
 * _atoi - entry function
 * @s: string
 * Return: always 0
 */
int _atoi(char *s)
{
	int a, b, c, den, f, mul;

	a = 0;
	b = 0;
	c = 0;
	den = 0;
	f = 0;
	mul = 0;

	while (s[den] != '\0')
		den++;
	while (a < den && f == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			mul = s[a] - '0';
			if (b % 2)
				mul = -mul;
			c = c * 10 + mul;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9'
)
				break;
			f = 0;
		}
		a++;
	}
	if (f == 0)
		return (0);
	return (c);
}
/**
 * main - two numbers mul
 * @argv: array
 * @argc: counts of cl
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int answer, digit1, digit2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	digit1 = _atoi(argv[1]);
	digit2 = _atoi(argv[2]);
	answer = digit1 * digit2;

	printf("%d\n", answer);

	return (0);
}
