/**
 * flip_bits - returns the number of digits that must be flipped
 * in one number to get a second number
 *@n: the number whose digits are to be flipped
 *@m: the number to be gotten
 * Return: the number of digits to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int k = 0;

	while (m | n)
	{
		if ((n & 1) != (m & 1))
		k++;
	m >>= 1;
	n >>= 1;
	}

	return (k);
}
