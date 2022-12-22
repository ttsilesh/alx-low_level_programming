#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int x, l = 0;

	while (str[l] != '\0')
		l++;

	x = (l - 1) / 2;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
