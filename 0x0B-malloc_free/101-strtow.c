#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - separates a string into words
 *@str: the string to be separated
 *
 *Return: a pointer to the pointers of the strings
 */

char **strtow(char *str)
{
	if (*(str) == NULL || *(str) == "")
		return (NULL)
	int i, word;
	char **mat;
/*First, we'll get the number of words in the string. counting tabs and spaces
 * word separators, the word count is initialized to 1, cos there'll be a word
 *before the first tab or space. we included a condition to only increment the
 *word count if a s/t is encountered only after the first iteration (i >0)
 * so that starting s/t are not counted.
 *we also included  another if statement to say if there's a space or tab immediately
 *after a space or tab, word count that would have been incremented twice should be
 *decremented to give the accurate count.*/
	word = 1;
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] == ' ' || str[i] == '\t') && i > 0)
		word++;
		if ((str[i] == ' ' || str[i] == 9) && (str[i + 1] == ' ' || str[i + 1] == 9))
		word--;
	}

	/*now that we know the number of words, (word) we're going to allocate a
	 *space in memory that will hold (word) strings. The starting address will
	 *be the address of a pointer to (word) pointers*/
	mat = (char **) malloc(sizeof(char *) * words);
	if (mat == NULL)
	{
		free (mat);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		mat[i] = (int *) malloc(sizeof(int) * width);

		if (mat[i] == NULL)
		{
			while (i >= 0)
		{
			free(mat[i]);
			i--;
		}
			free(mat);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			mat[i][j] = 0;

	}
}

int main(void)
{
	int k;
	char *s = "	The good boy is very		nice";
	k = strtow(s);
	printf("%d\n", k);
	return (0);
}
