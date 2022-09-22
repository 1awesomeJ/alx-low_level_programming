/**
 * reverse_array - reverses the content
 * of an array of integers
 * @a: the int array whose elements are to be reversed
 * @n: the length of the array
 */


void reverse_array(int *a, int n)
{
	int t[1000];
	int p;
	int q;

	p = n - 1;
	q = 0;
	while (p >= 0  &&  q < n)
	{
		t[q] = a[p];
			q++;
			p--;
	}
	for (p = 0; p < n; p++)
	{
		a[p] = t[p];
	}

}
