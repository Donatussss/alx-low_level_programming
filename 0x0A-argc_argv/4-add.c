#include <stdio.h>

/**
 * str_to_int - converts a string to int
 * @s: string to convert
 * Return: int
 */

int str_to_int(char *s)
{
	int i = 0;
	int num;

	if (!(*(s + i) >= 48 && *(s + i) <= 57))
	{
		return (-1);
	}

	num = *(s + i++) - '0';

	while (*(s + i) != '\0')
	{
		if (!(*(s + i) >= 48 && *(s + i) <= 57))
		{
			return (-1);
		}

		num = num * 10 + (*(s + i) - '0');
		i++;
	}

	return (num);
}


/**
 * main - a program that multiplies two numbers
 * program should print the result of the multiplication,
 * followed by a new line
 * @argc: a count of the arguments supplied to the program
 * @argv: an array of pointers to the strings which are those arguments
 * Return: 0
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	int sum = 0;
	int temp;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	while (--argc)
	{
		temp = str_to_int(*++argv);

		if (temp < 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += temp;
	}

	printf("%d\n", sum);

	return (0);
}