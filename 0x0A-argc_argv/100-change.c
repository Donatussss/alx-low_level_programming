#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of
 * coins to make change for an amount of money
 * if the number of arguments passed to your program is
 * not exactly 1, print Error, followed by a new line,
 * and return 1
 * If the number passed as the argument is negative,
 * print 0, followed by a new line
 * You can use an unlimited number of coins of values
 * 25, 10, 5, 2, and 1 cent
 * @argc: number of arguments
 * @argv: a pointer storing pointers to the arguments
 * Return: 0 or 1
 */


int main(int __attribute__ ((unused)) argc, char *argv[])
{
	int amount;
	int arr[5] = {25, 10, 5, 2, 1};
	int coin_count = 0;
	int coin_pos = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(*++argv);

	while (amount > 0)
	{
		while (amount >= arr[coin_pos])
		{
			amount -= arr[coin_pos];
			coin_count++;
		}

		coin_pos++;
	}

	printf("%d\n", coin_count);

	return (0);
}
