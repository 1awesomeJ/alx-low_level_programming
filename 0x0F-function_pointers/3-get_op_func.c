/**
 * get_op_func - gets the appropriate function to be called on operands.
 *@s: the string of the operator passed.
 * Return: a pointer to the appropriate function.
 */
#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
#include <string.h>

int (*get_op_func(char *s))(int, int)
{
int i = 0;

op_t k[] = { {"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}};

	while (i < 6)
{
	if (strcmp(s, k[i].op) == 0)
		return (k[i].f);
	i++;
}
	printf("Error");
	exit(99);
}
