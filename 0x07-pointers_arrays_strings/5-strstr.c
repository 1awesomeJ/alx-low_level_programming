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
	l = 0;
	while (needle[i] != '\0')
	{
		l++;
		i++;
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if ((haystack[i] == needle[0]) && (haystack[i + l] == needle[l]))
		return (haystack + i);
	}

	return ('\0');
}

