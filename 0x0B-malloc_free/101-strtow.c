#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - concatenates all the arguments of your program
 * @str: string
 * Return: a pointer to a new string
 */
char **strtow(char *str)
{
	int i = 0, w = 0, j = 0, k, con = 0, m, wordf;
	char **d;

	if (str == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
		if (str[i] != 32)
			con++;
	d = malloc(sizeof(char) * con);
	if (d == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] != 32)
		{
			*d[j] = str[i];
			j++;
		}
		else
		{
		}
	}
	return (d);
}
