/**
 * _strncat - concantenates a certain number of bytes
 * from one string to another
 *@src: the source string to be appended
 *@n: the number of bytes to be added from src
 *@dest: the destination string for the append.
 * Return: Always 0.
 */



char *_strncat(char *dest, char *src, int n)
{
	int i, k, t;

	i = 0;
	k = 0;
	while (dest[i] != '\0')
	{
		k++;
		i++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		t++;
	}


	i = 0;
	while (i < n && i < (t + 1))
	{
		dest[k] = src[i];
		i++;
		k++;
	}

	return (dest);

}
