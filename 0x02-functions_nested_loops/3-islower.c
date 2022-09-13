/**
 * _islower - checks whether a character is lower case
 *@c: character to be tested
 * Return: Always 0 (Success)
 */



int _islower(int c)
{
	int r;

	if (c >= 97 && c <= 122)

		r = 1;
	else
		r = 0;

	return (r);

}
