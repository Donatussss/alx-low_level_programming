#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its
 * parameters
 * @n: number of parameters
 * Return: sum of of all its parameters
 * If n == 0 return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum_all = 0;
	va_list ap;
	va_start(ap, n);

	if (n == 0)
		return (0);

	
	while (i++ < n)
		sum_all += va_arg(ap, int);

	return (sum_all);
}
