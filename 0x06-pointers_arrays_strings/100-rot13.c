/**
 * rot13 - encodes a string using rot13
 *
 * @s: the string to be encoded
 * Return: Always 0.
 */

char *rot13(char *s)
{
	int i = 0;
	int c;
	char k[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char sw[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		for (c = 0; c < 52; c++)
		{
			if (s[i] == k[c])
			{
			s[i] = sw[c];
			}
		}
		i++;
	}

	return (s);
}
