/**
 * _strcmp - compares two strings
 *@s1: first string
 *@s2: second string
 * Return: difference between the strings
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			break;
		i++;
	}
	diff = s1[i] - s2[i];
	return (diff);
}
