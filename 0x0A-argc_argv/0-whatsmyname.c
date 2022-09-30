#include <stdio.h>
/**
 * main - makes a program print its own name
 *@argc: counts the number of arguments passed during execution
 *@argv: vector that stores all arguments as strings which they are
 *Return:  0 on success
 */
int main(__attribute__((unused))int argc, char **argv)
{
	printf("%s\n", argv[0]);

	return (0);
}
