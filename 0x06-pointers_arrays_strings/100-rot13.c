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
	char w[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		c = 0;
		while (k[c] != '\0')
		{
			if (s[i] == k[c])
			{
				s[i] = w[c];
					break;
			}
			c++;
		}
		i++;
	}

	return (s);
}
