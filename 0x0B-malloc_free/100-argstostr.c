#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of a program
 *@ac: argument count.
 *@av: argument vector.
 *Return: a pointer to the pointers to the arguments
 */

char *argstostr(int ac, char **av)
{
	int i, j, l, len;
	char *mat;

	len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac ; i++)
	{
		j = 0;
		l = 0;
	while (av[i][j] != '\0')
	{
		l++;
		j++;
	}
	len += l;
	}
	len += ac;

	mat = (char *)malloc(sizeof(char) * (len + 1));

	if (mat == NULL)
	{
		free(mat);
		return (NULL);
	}
		l = 0;
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
		mat[l] = av[i][j];
		l++;
	}
		mat[l] = '\n';
		l++;
	}
	return (mat);
}
