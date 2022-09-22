/**
 * string_toupper - converts lowercase characters
 * in a string to uppercase
 * @s: the string whose lower case characters are to be converted
 * Return: Always 0.
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
