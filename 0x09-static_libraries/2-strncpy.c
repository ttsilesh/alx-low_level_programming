#include "main.h"

/**
 * _strncpy -copies src string to dest
 * @src: src string
 * @dest: destination string
 * @n: no. of string to be copied
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
