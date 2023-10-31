#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - a function that creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success
 * -1 on failure (file can not be created,
 *  file can not be written, write “fails”, etc…)
 * The created file must have those permissions: rw-------
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int file_descp, text_content_len = 0, wr;

	if (!filename)
		return (-1);

	file_descp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_descp == -1)
		return (-1);
	if (!text_content)
		text_content = "";

	while (text_content[text_content_len])
		text_content_len++;

	wr = write(file_descp, text_content, text_content_len);

	if (wr == -1)
		return (-1);

	close(file_descp);

	return (1);
}
