#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * You are allowed to use printf
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * Print a new line at the end of your function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *temp;

	va_start(ap, n);

	while (i < n)
	{
		temp = va_arg(ap, char *);

		if (temp != NULL)
			printf("%s", temp);
		else if (temp == NULL)
			printf("(nil)");

		if (i < n - 1)
			printf("%s", separator);

		i++;
	}
	
	printf("\n");
}
