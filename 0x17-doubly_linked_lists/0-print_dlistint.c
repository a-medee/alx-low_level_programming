#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint -  prints all the elements of a dlistint_t list.
 * @h: a head to our doubly linked list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	ssize_t count = 0;
	dlistint_t *first_t = h;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	h = first_t;

	return (count);
}
