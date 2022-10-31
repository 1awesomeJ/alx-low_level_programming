#include "main.h"

/**
 * create_file - creates a file
 *@filename: name of the file
 *@text_content: content to be written to the file
 * Return: Always 1 on success, -1 on failure.
 */


int create_file(const char *filename, char *text_content)
{
	int fileDes;
	ssize_t size_w;
	size_t k;

	k = strlen(text_content);

	if (!(filename))
		return (-1);
	fileDes = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (fileDes < 0)
		return (-1);

	if (!(text_content))
		return (1);
	size_w = write(fileDes, text_content, k);

	if (size_w < 0)
		return (-1);

	return (1);
}
