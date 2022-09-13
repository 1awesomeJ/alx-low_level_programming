/**
 * _isalpha - checks whether a character is an alphabet
 *@c: character to be checked
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	int r;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		r = 1;
	else
		r = 0;
	return (r);
}
