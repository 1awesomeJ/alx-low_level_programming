/**
 * _strcpy- copies one string into another.
 * @src: the string to be copied
 * @dest: the string that has been copied
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int k = 0;
	int n;

	for (n = 0; src[n] != '\0'; n++)
	{
		k++;
	}
	if (k >= 0)
	{
	for (n = 0; n <= k + 1; n++)
	{
		dest[n] = src[n];
	}
	}
	return (dest);

}
