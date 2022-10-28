/**
 * set_bit - sets the value at a given bit of a number to 1
 *@n: the number.
 *@index: the index of the bit to be set
 * Return: Always 0.
 */




int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	*n |= 1 << index;
	return (1);
}
