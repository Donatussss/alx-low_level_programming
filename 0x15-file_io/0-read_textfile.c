#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: path to file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descp;
	char *buffer;
	ssize_t rd, wr;

	if (!filename)
		return (0);

	file_descp = open(filename, O_RDONLY);
	if (!file_descp)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (!buffer)
		return (0);

	rd = read(file_descp, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (wr != rd || wr < 0)
		return (0);

	close(file_descp);
	free(buffer);

	return (rd);
}
