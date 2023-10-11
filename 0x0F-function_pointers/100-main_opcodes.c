#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: 0 on good operation
 */


int main(int argc, char *argv[])
{
	int i = 0;
	int bytenum;
	char *opcodes = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytenum = atoi(*(argv + 1));

	if (bytenum < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < bytenum)
	{
		printf("%02x", opcodes[i] & 0xFF);

		if (i != bytenum - 1)
			printf(" ");

		i++;
	}

	printf("\n");

	return (0);
}
