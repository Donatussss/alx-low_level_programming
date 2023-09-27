#include "main.h"

/**
 * _sqrt_temp - a function that returns the
 * natural square root of a number
 * @n: number to find natural square root
 * @p: starting point
 * Return: square root of natural number or -1
 */

int _sqrt_temp(int n, int p)
{
	if ((p * p) > n)
	{
		return (-1);
	}

	else if ((p * p) == n)
	{
		return (p);
	}

	return (_sqrt_temp(n, p + 1));
}

/**
 * _sqrt_recursion -  a function that returns the
 * natural square root of a number
 * @n: number to find natural square root
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_temp(n, 1));
}
