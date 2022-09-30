#include <stdio.h>
/**
 * main - makes a program print out all the arguments passed to
 * it during executin.
 *@argc: counts the number of arguments passed during execution
 *@argv: vector that stores all arguments as strings which they are
 *Return:  0 on success
 */
int main(int argc, __attribute__((unused))char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}
