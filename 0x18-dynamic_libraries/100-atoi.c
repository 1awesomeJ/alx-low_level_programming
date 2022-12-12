/**
 * _atoi - converts string to int
 * @s: the string to be converted
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int k = 0;
	int i = 0;
	int sign = 1;
	if (s[0] == '-')
		sign = -1;
	while (s[i] >= '0' && s[i] <= '9')
	{
		k = k * 10 + s[i] - '0';
	
	}
	return (k * sign);
}


