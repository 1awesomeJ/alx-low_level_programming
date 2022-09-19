/**
 * swap_int - swaps the values at the addresses stored by two pointers
 * @a: first pointer
 * @b: second pointer
 * Return: Always 0.
 */


void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
