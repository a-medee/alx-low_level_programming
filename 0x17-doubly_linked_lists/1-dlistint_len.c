#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - returns the number of elements in a
 * linked dlistint_t list.
 * @h: a head to our doubly linked list
 *
 * Return: the number of nodes in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	ssize_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
