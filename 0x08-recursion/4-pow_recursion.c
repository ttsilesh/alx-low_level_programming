#include "main.h"

/**
 * _pow_recursion - prints x rais to y
 * @x: int
 * @y: int
 * Return: Always 0 (Success)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
