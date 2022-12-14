#include "main.h"

/**
 * append_text_to_file - appends a text to a file opened
 *@filename: the name of the file
 *@text_content: the text to be appended to the file
 * Return: Always 0.
 */




int append_text_to_file(const char *filename, char *text_content)

{
	int fd;
	ssize_t size_w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content == NULL)
		return (1);
	size_w = write(fd, text_content, strlen(text_content));
	if (size_w < 0)
		return (-1);

	close(fd);

	return (1);
}
