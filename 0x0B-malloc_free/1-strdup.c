#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - pointer to allocated space
 * @str: string
 *
 * Return: a pointer
 */
char *_strdup(char *str)
{
	char *param;
	int i;
	int r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	param = malloc(sizeof(char) * (i + 1));

	if (param == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		param[r] = str[r];

	return (param);

}
