#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0
 */

int main(void)
{
	int n, i, h;

	for (h = 0 ; h != 8; n++)
	{
		for (n = h + 1 ; n != 9 ; n++)
		{
		i = n + 1;
		do {
			putchar('0' + h);
			putchar('0' + n);
			putchar('0' + i);
			if (n != 7)
			{
				putchar(',');
				putchar(32);
			}
			i++;
		} while (i != 10);
		}
	}
	putchar('\n');
	return (0);
}
