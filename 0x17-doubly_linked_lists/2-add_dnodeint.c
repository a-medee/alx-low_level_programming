#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add a new node at the beginning of a dlistint_t list.
 * @head: a head to the doubly linked list
 * @n: the new int element to be added to our list
 *
 * Return: a newly inserted dlistint element or NUll if everything
 * goes wrong
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_elt = malloc(sizeof(dlistint_t));

	if (new_elt)
	{
		if (!head)
		{
			new_elt->n = n;
			new_elt->next = NULL;
			new_elt->prev = NULL;

			(*head) = new_elt;
		}
		else
		{
			new_elt->n = n;
			new_elt->next = (*head);
			new_elt->prev = NULL;

			(*head) = new_elt;
		}

		return (new_elt);
	}

	return (NULL);
}
