#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * Do not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist or
 * if you do not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descp, text_content_len = 0, wr;

	if (!filename)
		return (-1);
	file_descp = open(filename, O_WRONLY | O_APPEND);

	if (file_descp == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[text_content_len])
			text_content_len++;
		wr = write(file_descp, text_content, text_content_len);

		if (wr == -1)
			return (-1);
	}
	close(file_descp);

	return (1);
}
