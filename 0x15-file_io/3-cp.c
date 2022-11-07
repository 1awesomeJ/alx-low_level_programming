#include "main.h"
/**
 * main - check the code
 *@ac: argument count
 *@av: argument vector
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd1, fd2, k1, k2;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 < 0)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	exit(98);
	}
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 < 0)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
	exit(99);
	}
	_read(fd1, fd2, av[1], av[2]);

	k1 = close(fd1);
	if (k1 < 0)
	{
	dprintf(STDERR_FILENO, "Can't close fd %d", fd1);
	exit(100);
	}
	k2 = close(fd2);
	if (k2 < 0)
	{
	dprintf(STDERR_FILENO, "Can't close fd %d", fd1);
	exit(100);
	}
	return (0);
}
/**
 * _read - copies from one file to another
 *@fd1: file to be read from
 *@fd2: file to be written to
 *@a: name of file to copy
 *@b: name of file to copy to
 * Return: 0 on success
 */
int _read(int fd1, int fd2, char *a, char *b)
{	ssize_t size_r, size_w;
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", a);
		free(buff);
		exit(98);
	}
	size_r = read(fd1, buff, (size_t)1024);
	if (size_r < 0)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", a);
	free(buff);
	exit(98);
	}
	size_w = write(fd2, buff, size_r);
	if (size_w < 0)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", b);
	free(buff);
	exit(99);
	}
while (size_r)
{
	size_r = read(fd1, buff, (size_t)1024);
	if (size_r < 0)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", a);
	free(buff);
	exit(98);
	}
	size_w = write(fd2, buff, size_r);
	if (size_w < 0)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", b);
	free(buff);
	exit(99);
	}
}
return (0);
}
