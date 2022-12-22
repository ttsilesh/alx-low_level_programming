#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int x, i, l = 0;

	while (str[l] != '\0')
		l++;

	x = (l - 1) / 2;
	for (i = x; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
