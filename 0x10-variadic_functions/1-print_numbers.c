#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * function that prints numbers
 * separator is the string to be printed between numbers
 * n is the number of integers passed to the function
 * If separator is NULL, don’t print it
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *sep;
	unsigned int x;
	va_list list;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(list, n);

	if (n > 0)
		printf("%d", va_arg(list, int));
	for (x = 1; x < n; x++)
		printf("%s%d", sep, va_arg(list, int));
	printf("\n");
	va_end(list);
}
