/**
 * _strpbrk - locates the first match of a character in s
 * with a character in accept
 *@s: the string to be searched
 *@accept: the string to be matched
 * Return: pointer to the first occurrence of the character.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
		if (s[i] == accept[j])
		break;
		}
		if (s[i] == accept[j])
		break;
	}

	return (s + i);
}
