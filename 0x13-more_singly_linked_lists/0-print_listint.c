#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - a function that prints all the elements of a listint_t list.
 * @h: a variable of type list_t, the h whose elements will be printed
 *
 * Return: the number of node successfully printed
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
