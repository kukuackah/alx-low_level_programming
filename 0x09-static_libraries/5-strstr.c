#include "main.h"
/**
 * _strstr - Entry point
 * @needle: String
 * @haystack: A string
 * Return: always 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	char *c;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (needle[j])
		{
			if (needle[j] == haystack[i + j])
			{
				k = 1;
			}
			else
			{
				k = 0;
				break;
			}
			j++;
		}
		if (k == 1)
		{
			c = haystack + i;
			break;
		}
		i++;
	}
	return (c);
}
