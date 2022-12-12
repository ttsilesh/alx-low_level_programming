#include <stdio.h>

/**
 * main - prints alpha in lower and upper case
 * Return: Always 0
 */

int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'e' && lc != 'q')
		putchar(lc);
	}
	putchar('\n');

	return (0);
}
