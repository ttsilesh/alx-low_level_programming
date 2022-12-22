#include "main.h"

/**
 * puts2 - prints other character of string, start with first character
 * @str: string to be printed
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}

	_putchar('\n');
}
