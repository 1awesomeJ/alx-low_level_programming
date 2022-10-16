#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - runs the calculator
 *@ac: argument count
 *@av: argument vector
 *Return: Always 0.
 */

int main(int ac, char **av)
{
	int a, b;
	int (*op)(int a, int b);

	if (ac != 4)
	{
	printf("Error\n");
	exit(98);
	}

	op = get_op_func(av[2]);

	a = atoi(av[1]);
	b = atoi(av[3]);
	printf("%d\n", op(a, b));

	return (0);
}
