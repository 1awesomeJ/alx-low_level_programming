/**
 * leet - encodes a string into 1337
 *
 * @s: the string to be encoded
 * Return: Always 0.
 */

char *leet(char *s)
{
	int i = 0;
	int c;
	char k[10] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	char sw[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (s[i] != '\0')
	{
		for (c = 0; c < 10; c++)
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
