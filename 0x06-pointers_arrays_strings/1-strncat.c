#include "main.h"

/**
 * _strncat - concatenates two strings n byte from the second.
 * @src: source string
 * @dest: destination string
 * @n: no. of char to be concatinated
 * Return: cancat string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
