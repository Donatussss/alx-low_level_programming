#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: a count of the arguments supplied to the program
 * @argv: an array of pointers to the strings which are those arguments
 * Return: 0
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	while (argc--)
	{
		printf("%s\n",  *argv++);
	}
	return (0);
}
