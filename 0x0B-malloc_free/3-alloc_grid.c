#include <stdlib.h>

/**
 * alloc_grid - allocates space in memory for a 2D array of inyegers.
 *@width: width of the array (number of columns)
 *@height: height of the array (number of rows)
 * Return: a pointer to the pointers to the rows of the array
 */



int **alloc_grid(int width, int height)
{
	int **mat = (int **) malloc(sizeof(int *) * height);
	int i, j;

	if (height < 1 || width < 1)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		mat[i] = (int *) malloc(sizeof(int) * width);
		if (mat[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			mat[i][j] = 0;

	}
	return (mat);
}
