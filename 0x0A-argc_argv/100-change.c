#include <stdio.h>
#include <stdlib.h>

int change(int cents);

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: number of arguments.
 * @argv: amount of money given in singles.
 * Return: 0 (sucesss) , 1 (Failure)
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc < 0)
		return (0);

	printf("%d\n", change(atoi(argv[1])));
	return (0);
}

/**
 * change - find the minimum number of coins to make change
 * for an amount of money
 * @cents: amount of money given in singles.
 * Return: min amount of coins. (INT)
 */
int change(int cents)
{
	int q = 25, d = 10, n = 5, t = 2, p = 1;
	int coins;

	while (cents > 0)
	{
		while (cents >= q)
		{
			cents -= q;
			coins++;
		}
		while (cents >= d)
		{
			cents -= d;
			coins++;
		}
		while (cents >= n)
		{
			cents -= n;
			coins++;
		}
		while (cents >= t)
		{
			cents -= t;
			coins++;
		}
		while (cents >= p)
		{
			cents -= p;
			coins++;
		}
	}
	return (coins);

}
