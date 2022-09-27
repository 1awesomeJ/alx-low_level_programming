/**
 * print_chessboard - prints a chessboard from a 2D array
 *
 * @a: the 2D array being used.
 */





#include "main.h"
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
		_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
