/**
 * _strspn - checks and returns the number of bytes
 * in the initial segment of a string which consists only of bytes
 * from another string.
 * @s: the string whose initial segment is to be checked.
 * @accept: the string to be compared with.
 * Return: number of bytes matching
 */



unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	for (i = 0; accept[i] != '\0'; i++)
	{
		if (s[0] == accept[i])
		{
			;
		}
		else
		{
		return (0);
		}

	}
	i = 0;
	while ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
		if (s[i] == accept[j])
			count++;
		}
		i++;
	}
	return (count);
}
