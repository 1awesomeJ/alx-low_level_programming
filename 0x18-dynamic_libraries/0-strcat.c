/**
 * _strcat - concantenates a string to another
 *@src: the source string to be appended
 *@dest: the destination string for the append.
 * Return: Always 0.
 */





char *_strcat(char *dest, char *src)

{
	int k, n, i;

	i = 0;
	k = 0;
	n = 0;
	while (dest[i] != '\0')
	{
		k++;
		i++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		n++;
	}
	i = 0;
	while (i <= n + 1)
	{
		dest[k] = src[i];
		i++;
		k++;
	}

	return (dest);

}
