#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * check_file - checks if provided files can be opened
 * @file_from: file_from
 * @file_to: file_to
 * @argv: arguments vector
 */
void check_files(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - a program that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t file_chars, wr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_files(file_from, file_to, argv);
	file_chars = 1024;

	while (file_chars == 1024)
	{
		file_chars = read(file_from, buf, 1024);
		if (file_chars == -1)
			check_files(-1, 0, argv);

		wr = write(file_to, buf, file_chars);
		if (wr == -1)
			check_files(0, -1, argv);
	}


	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
