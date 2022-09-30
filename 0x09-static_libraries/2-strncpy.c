/**
 * _strncpy - copies a certain number of bytes
 * from one string to another
 *@src: the source string to be copied
 *@n: the number of bytes to be added from src
 *@dest: the destination string for the copied bytes
 * Return: Always 0.
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i, k;

	i = 0;
	k = 0;
	while (dest[i] != '\0')
	{
		k++;
		i++;
	}

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			break;
		}
	}
	if (dest[i] == '\0')

	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);


}
