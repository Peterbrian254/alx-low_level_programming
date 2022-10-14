#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sun of all its parameters
 * @n: The number of paramters passed to the function.
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist , int);

	va_end(valist);

	return (sum);
}
