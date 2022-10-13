#include <stdarg.h>
/**
 * sum_them_all - sums all the parameters passed to a function
 *@n: the number of parameters to be summed.
 * Return: sum on success, 0 if n is 0.
 */


int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum;
va_list pars;
va_start(pars, n);
va_end(pars);

	if (n == 0)
	return (0);

sum = 0;
for (i = 0; i < n; i++)
	sum += va_arg(pars, unsigned int);

return (sum);
}
