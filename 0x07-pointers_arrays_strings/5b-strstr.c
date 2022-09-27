/**
 * _strstr- locates the first occurence of a substring in a string
 *@haystack: the string to be searched
 *@needle: the substring to be located
 * Return: pointer to the first occurrence of the substring.
 */

char *_strstr(char *haystack, char *needle)

{
	int i, l;

	i = 0;
	k = 0;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if ((haystack[i] == needle[0]) && (haystack[i + l - 1] == needle[l - 1]))
		{
			return (haystack + i);
		}
		if (needle[0] == '\0')
			return (haystack);
	}

	return ('\0');
}

