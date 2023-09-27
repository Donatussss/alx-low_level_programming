#include "main.h"

/**
 * factorial - a function that returns the factorial of
 * a given number
 * @n: number to get factorial
 * Return: factorial of n
 */

int factorial(int n)
{
	int temp;

	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	temp = factorial(n - 1);

	if (temp == -1)
	{
		temp = 1;
	}

	return (n * temp);
}
