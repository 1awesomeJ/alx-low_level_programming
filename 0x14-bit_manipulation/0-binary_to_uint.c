#include <stddef.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *@b: a pointer to a string of the binary digits.
 * Return: the decimal equivalent, or 0 on failure.
 */


unsigned int binary_to_uint(const char *b)
{
int i, k;
unsigned int d, m;
if (b == NULL)
	return (0);
k = strlen(b);
m = 1;
d = 0;
for (i = (k - 1); i >= 0; i--)
{
	if (!(b[i] == '0' || b[i] == '1'))
	return (0);

	if (b[i] == '1')
		d += m;
	m *= 2;
}

return (d);
}
