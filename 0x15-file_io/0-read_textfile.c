#include "main.h"
/**
 * read_textfile - reads from a file and outputs it to the console
 *@filename: name of file to be read
 *@letters: number of characters to be read.
 * Return: Always 0.
 */



ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t size_r, size_w;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters * sizeof(char));

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	return (0);

	size_r = read(fd, buffer, letters);
	if (size_r < 0)
	return (0);

	if ((ssize_t) letters > size_r)
		letters = size_r;
	size_w = write(STDOUT_FILENO, buffer, letters);
	if (size_w < 0 || size_w < (ssize_t) letters)
		return (0);

	close(fd);
	return (size_r);
}



