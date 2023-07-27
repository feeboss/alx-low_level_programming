#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the amount of components in a linked list
 * @h: reference to the list_t list
 *
 * Return: the amount of components in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

