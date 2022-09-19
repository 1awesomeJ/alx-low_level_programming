/**
 * _strcpy- copies one string into another.
 * @src: the string to be copied
 * @dest: the string that has been copied
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	static int k = 1;
	static int i;

	while (src[k] != '\0')
	{
		k++;
	}
	if (k > 1)
	{
	for (i = 0; i <= k; i++)
	{
		dest[i] = src[i];
	}
	}
	return (dest);
}
