/**
 * _strstr- locates the first occurence of a substring in a string
 *@haystack: the string to be searched
 *@needle: the substring to be located
 * Return: pointer to the first occurrence of the substring.
 */

char *_strstr(char *haystack, char *needle);

{
	int i ,j;

	i= 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
			break;
	}
	for (j = 0; needle[j] != '\0'; j++)
	{
		if (haystack[i]==needle[j]

	}
		return (s + i);
	}
	else
	{
	return ('\0');
	}
}
