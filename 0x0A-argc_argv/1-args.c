#include <stdio.h>

/**
 * main - Entry point.
 * @argc: size of argv
 * @argv: name of app + any other arguments.
 * Return: Alway 0 (sucess)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (argc - 1);
}
