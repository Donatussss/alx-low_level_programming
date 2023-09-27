#include "main.h"

/**
 * is_prime_number_temp - a function that returns 1 if
 * the input integer is a prime number, otherwise return 0
 * @n: number to check if is prime number
 * @p: number to test n with
 * Return: 1 if prime number, otherwise 0
 */

int is_prime_number_temp(int n, int p)
{
	if (n % p == 0 && p > 1)
	{
		return (0);
	}

	else if (p < 0)
	{
		return (1);
	}

	return (is_prime_number_temp(n, p - 2));
}

/**
 * is_prime_number - a function that returns 1 if
 * the input integer is a prime number, otherwise return 0
 * @n: number to check if is prime number
 * Return: 1 if prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}

	else if (n < 0 || (n % 2 == 0 && n > 2) || n == 1)
	{
		return (0);
	}

	return (is_prime_number_temp(n, n - 2));
}
