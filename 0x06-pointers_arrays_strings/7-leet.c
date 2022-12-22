#include "main.h"

/**
 * leet - encode string into 1337 leet
 * @s: string to be manipulated
 * Return: string
 */

char *leet(char *s)
{
	int i, j;
	char s1[] = "AaEeOoTtLl";
	char s2[] = "4433007711";

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; i < 10; i++)
		{
			if (s[j] == s1[i])
				s[j] = s2[i];
		}
	}
	return (s);
}
