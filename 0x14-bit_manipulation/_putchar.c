#include <unistd.h>
#include "main.h"

/*
 * _putchar - used to write a char to stdout
 * c - the char to print 
 *
 * return - 1
 */

int _putcher (char c)
{
return (write(1, &c, 1));
}
