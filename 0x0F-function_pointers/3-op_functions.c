#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds two numbers
 *@a: the first number
 *@b: the second number
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}



/**
 * op_sub - subtracts two numbers
 *@a: the first number
 *@b: the second number
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}



/**
 * op_mul - multiplies two numbers
 *@a: the first number
 *@b: the second number
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}



/**
 * op_div - divides two numbers
 *@a: the first number
 *@b: the second number
 * Return: the quotient
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
	return (a / b);
	}
}



/**
 * op_mod - get the modulus of a number relative to another
 *@a: the first number
 *@b: the second number
 * Return: the modulus(remainder on division)
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
	return (a % b);
	}
}

