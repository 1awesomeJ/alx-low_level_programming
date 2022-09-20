/**
 * _atoi - converts string to int
 * @s: the string to be converted
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int k = 0;
	int i;
	int sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		k = k * 10 + s[i] - '0';
	}
	if (s[0] == '-')
	{
		sign = -1;
	}
	return (k * sign);
}


