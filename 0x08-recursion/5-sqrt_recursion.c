#include "main.h"
int squareroot(int n, int i);

/**
 * _sqrt_recursion - no loop prints the square root of an int
 * @n: input intiger
 * Return: Always 0 (Success)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (squareroot(n, (n + 1) / 2));
}

/**
 * squareroot - checks if n have perfect square
 * @n: integer
 * @i: counter
 * Return: if square root
 */

int squareroot(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (squareroot(n, i - 1));
}
