#include "lists.h"
#include <stddef.h>

/**
 * list_len - return the number of elements in a linked list.
 * @h: a type list_t variable whose elements are  to be counted
 *
 * Return: a type size_t value
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
