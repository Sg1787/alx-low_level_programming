#include <stdarg.h>
#include "variadic_functions.h"

/**
 * a function that returns the sum of all its peramiters
 *
 * if n == 0
 *
 * return 0
 * 
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum;
	va_list list;

	va_start(list, n);
	for (x = 0, sum = 0; x < n; x++)
		sum += va_arg(list, int);

	va_end(list);
	return (sum);
}
