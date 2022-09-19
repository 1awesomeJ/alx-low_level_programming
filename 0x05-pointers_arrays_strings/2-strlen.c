/**
 * _strlen - gives the length of a string
 * @s: the string array whose length is to be determined
 * Return: Always 0.
 */


int _strlen(char s[])
{
	int k = 0;
	int n;

	for (n = 0; s[n] != '\0'; n++)
		k++;
	return (k);
}
