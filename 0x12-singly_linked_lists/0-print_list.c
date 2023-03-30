#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: a variable of type list_t, the h whose elements will be printed
 *
 * Return: the number of element successfully printed
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%u] ", h->len);
			printf("%s\n", h->str);
		}
		else
			printf("[0] (nil)\n");
		count++;
		h = h->next;
	}
	return (count);
}
