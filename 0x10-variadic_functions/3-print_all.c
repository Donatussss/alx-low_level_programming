#include "variadic_functions.h"

/**
 * print_c - prints a char
 * @ap: an argument pointer variable
 */

void print_c(va_list ap)
{
	printf("%c", (char)va_arg(ap, int));
}

/**
 * print_i - prints an int
 * @ap: an argument pointer variable
 */

void print_i(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_f - prints a float
 * @ap: an argument pointer variable
 */

void print_f(va_list ap)
{
	float f = (float)va_arg(ap, double);

	printf("%f", f);
}

/**
 * print_s - prints a string
 * @ap: an argument pointer variable
 */

void print_s(va_list ap)
{
	char *temp = va_arg(ap, char *);

	if (temp == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", temp);
}

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead)
 * any other char should be ignored
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char original_f[] = "cifs";
	int executed = 0;

	printer_t f[] = {{"c", print_c}, {"i", print_i}, 
		{"f", print_f}, {"s", print_s}};

	va_start(ap, format);

	while (*(format + i) != '\0')
	{
		j = 0;

		if (executed)
			printf(", ");

		executed = 0;

		while (*(original_f + j) != '\0')
		{
			if (*(format + i) == *(original_f + j))
			{
				f[j].print(ap);
				executed = 1;
			}
			j++;
		}

		i++;
	}

	printf("\n");
	va_end(ap);
}
