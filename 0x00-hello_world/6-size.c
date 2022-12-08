#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	printf("Size of a char: %i byte\n", sizeof(char));
	printf("Size of an int: %i byte\n", sizeof(int));
	printf("Size of a long in: %i byte\n", sizeof(long int));
	printf("Size of a long long int: %i byte\n", sizeof(long long int));
	printf("Size of a float: %i byte\n", sizeof(float));
	return (0);
}
