#include "main.h"

/**
 * rev_string - prints a string, in reverse,
 * @s: string to be printed
 */

void rev_string(char *s)
{
	int i;
	int rv = s[0];
	int c = 0;

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		rv = s[i];
		s[i] = s[c];
		s[c] = rv;
	}
}
