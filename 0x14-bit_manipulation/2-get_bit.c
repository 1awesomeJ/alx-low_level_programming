/**
 * get_bit - returns the digit at a particular index of a number;
 *@n: the number whose value at a given index is to be determined
 *@index: the particular index at which the value is required.
 *Return: the digit at the given bit (0 0r 1).
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long k, m;

	m = (sizeof(unsigned long int)) * 8;
	if (index >= m)
		return (-1);

	k = n >> index;
	if (k & 1)
	return (1);
	else
	return (0);
}

