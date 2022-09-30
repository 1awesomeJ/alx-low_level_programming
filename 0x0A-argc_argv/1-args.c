#include <stdio.h>
/**
 * main - makes a program print out the number of arguments passed to
 * it during executin.
 *@argc: counts the number of arguments passed during execution
 *@argv: vector that stores all arguments as strings which they are
 *Return:  0 on success
 */
int main(int argc, __attribute__((unused))char **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
