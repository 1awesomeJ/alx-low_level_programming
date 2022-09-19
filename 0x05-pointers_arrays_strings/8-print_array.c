#include <stdio.h>
/**
 * print_array - prints up to the nth item of an array
 * @a: the array whose elements are to be printed
 * @n: the number of element to which we're printing
 */



void print_array(int *a, int n)
{	
	int s;
	int k;
	s = (&a+1) - a;
	
	printf("s= %d\n", s);
	
	for (k = 0; k < n - 1; k++)
	{
	printf("%d, ", a[k]);
	}
	printf("%d\n", a[n - 1]);

}
