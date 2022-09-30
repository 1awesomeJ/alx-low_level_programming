#include <stdio.h>
#include <stdlib.h>
/**
 * main - makes a program print out all the arguments passed to
 * it during executin.
 *@argc: counts the number of arguments passed during execution
 *@argv: vector that stores all arguments as strings which they are
 *Return:  0 on success
 */
int main(int argc, __attribute__((unused))char **argv)
{
	int i, j, sum;

	sum = 0;
	if (argc < 2)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (*(argv[i] +j) != '\0')
		{
			if (*(argv[i] + j) > '9' || *(argv[i]+j) < '0')
			{
			printf("Error\n");
			return (1);
			}
		j++;
		}
		if (atoi(argv[i]) < 1)
			continue;
	sum += atoi(argv[i]);
	}
	if (argc > 1)
	printf("%d\n", sum);
	return (0);
}
