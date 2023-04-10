#include <stdio.h>
#include "main.h"
/**
 * main - function name
 * @argv: array
 * @argc: counts commandline func
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /* disregard argv */
	printf("%d\n", argc - 1);

	return (0);
}
