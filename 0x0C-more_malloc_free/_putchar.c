#include "main.h"
#include <unistd.h>
/**
 * _putchar
 * @c: The char to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set approp.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
