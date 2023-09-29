#include <stdio.h>

/**
 * str_to_int - converts a string to int
 * @s: string to convert
 * Return: int
 */

int str_to_int(char *s)
{
	int i = 0;
	int sign = 1;
	int num;

	if (*(s + i) == 45)
	{
		sign = -1;
		num = *(s + ++i) - '0';
		i++;
	}

	else if (*(s + i) >= 48 && *(s + i) <= 57)
	{
		num = *(s + i++) - '0';
	}

	while (*(s + i) != '\0')
	{
		num = num * 10 + (*(s + i) - '0');
		i++;
	}

	return (num * sign);
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
	int mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	while (--argc)
	{
		mul *= str_to_int(*++argv);
	}

	printf("%d\n", mul);

	return (0);
}
