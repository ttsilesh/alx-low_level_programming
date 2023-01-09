#include <stdio.h>

/**
 * main - Entry point.
 * @argc: size of argv
 * @argv: name of app + any other arguments.
 * Return: Alway 0 (sucess)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
