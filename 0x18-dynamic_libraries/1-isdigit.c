/**
 * _isdigit - checks if a character is a digit
 *
 * @c: - character to be tested
 * Return: Always 0.
 */




int _isdigit(int c)
{
	int k;

	if (c >= 48 && c <= 57)
		k = 1;
	else
		k = 0;
	return (k);
}
