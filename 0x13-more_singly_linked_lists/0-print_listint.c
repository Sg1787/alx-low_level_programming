#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print all the elementsof a list
 *
 * return 0
 */

size_t print_listint(const listint_t *h)
{
	size_t num=0;
	for (; h !=NULL; cont++)
	{
	printf("%d\n", h->n);
	num++;
	h = h->next;
	}
	return (num);
}
