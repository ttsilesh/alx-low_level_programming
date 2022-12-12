#include <stdio.h>

/**
 * main - prints alpha in lower case
 * Return: Always 0
 */

int main(void)
{
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
	{
		putchar(lc);
	}
	putchar('\n');

	return (0);
}
