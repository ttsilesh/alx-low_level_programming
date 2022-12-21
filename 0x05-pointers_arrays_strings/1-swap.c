#include "main.h"

/**
 * swap_int - swap the value of a and b
 * @a: integer
 * @b: integer
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
