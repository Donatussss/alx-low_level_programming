#include "3-calc.h"

/**
 * main - a program that performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on good operation
 */

int main(int argc, char *argv[])
{
	int (*fptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*(argv + 2))[1])
	{
		printf("Error\n");
		exit(99);
	}

	fptr = get_op_func(*(argv + 2));

	if (fptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", fptr(atoi(*(argv + 1)), atoi(*(argv + 3))));

	return (0);
}
