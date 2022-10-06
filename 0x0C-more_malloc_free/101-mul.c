#include<stdio.h>
#include<stdlib.h>
/**
 * main - multiplies two numbers which are execution arguments
 * @ac: argument count
 * @av: argument array
 *Return: product of the two numbers on success
 */




int main(int ac, char **av)
{
	long int n1, n2, pdt;

	if (ac != 3)
		return (0);
	n1 = atoi(av[1]);
	n2 = atoi(av[2]);
	pdt = n1 * n2;
	printf("%ld\n", pdt);
	return (0);
}

