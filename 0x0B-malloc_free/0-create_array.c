#include <stdlib.h>
/**
 * create_array - creates a specified size of contigous memory
 * space dynamically,
 * allocates it to a character array, and initializes it to a given character.
 *@size: the size of the charcter array
 *@c: the character with which the array
 * Return: Always 0.
 */




char *create_array(unsigned int size, char c)

{
	char *set;
	unsigned int i;

	if (size == 0)
		return (NULL);
	set = (char *) malloc(size * sizeof(char));
	if (set == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		set[i] = c;
	}
	return (set);

}

