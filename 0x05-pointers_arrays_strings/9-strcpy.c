/**
 * _strcpy- copies one string into another.
 * @s: the string array whose length is to be determined
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
	for (n = 0; n <= k+1; n++)
	{
		dest[n] = src[n];
	}
	return (dest);
	
}
