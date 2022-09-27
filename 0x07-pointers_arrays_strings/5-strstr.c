/**
 * _strstr- locates the first occurence of a substring in a string
 *@haystack: the string to be searched
 *@needle: the substring to be located
 * Return: pointer to the first occurrence of the substring.
 */

char *_strstr(char *haystack, char *needle)

{
	int i, j, k;

	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
			break;
		i++;
	}
		k = i;
	for (j = 0; needle[j] != '\0'; j++)
	{
		if (needle[j] == haystack[i])
		{
			;
			i++;
		}
		else
		{
			return ('\0');
		}
	}

	return (haystack + k);
}
