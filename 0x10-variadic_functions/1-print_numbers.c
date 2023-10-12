#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * If separator is NULL, don’t print it
 * Print a new line at the end of your function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);

	if (separator != NULL && n > 0)
	{
		while (i < n)
		{
			printf("%d", va_arg(ap, int));

			if (i < n - 1)
				printf("%s", separator);

			i++;
		}

		printf("\n");
	}

	va_end(ap);
}
