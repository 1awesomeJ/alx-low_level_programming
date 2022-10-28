/**
 * clear_bit - sets the value at a given bit of a number to 0
 *@n: the number.
 *@index: the index of the bit to be set
 * Return: 1 on success, -1 otherwise.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
