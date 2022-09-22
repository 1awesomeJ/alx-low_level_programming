/**
 * cap_string - capitalizes every word in a string
 *
 * @s: the string whose lower case words are to be capitalized
 * Return: Always 0.
 */

char *cap_string(char *s)


{
	int i = 0;
	int c;
	char k[14] = {44, 46, ' ', '!', '{', '}', 40, 41, '"', '\n', '\t', ';', '?'};

	while (s[i] != '\0')
	{
		for (c = 0; c < 13; c++)
		{
			if (s[i] == k[c] && !(s[i + 1] >= 65 && s[i + 1] <= 90))
			{
				if (s[i + 1] != k[2] && s[i + 1] != k[9] && s[i + 1] != k[10])
				{
					if (s[i + 1] == '\0')
					continue;
				s[i + 1] -= 32;
				}
			}
		}
		i++;
	}

	return (s);
}
