#include <stdio.h>

/**
 * main - prints alpha in lower and upper case
 * Return: Always 0
 */

int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
		putchar(lc);

	for (lc = 'A'; lc <= 'Z'; lc++)
		putchar(lc);

	putchar('\n');

	return (0);
}
