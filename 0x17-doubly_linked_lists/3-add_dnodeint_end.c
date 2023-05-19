#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - add a new node at the end of a dlistint_t list.
 * @head: head of dlistint_t list
 * @n: a pointer to the number to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *a = malloc(sizeof(dlistint_t));
	dlistint_t **ad = head;
	dlistint_t *first = *head;

	if (a)
	{
		while ((*ad))
		{
			if ((*ad)->next == NULL)
			{
				break;
			}
			*ad = (*ad)->next;
		}
		a->next = NULL;
		a->prev = *ad;
		a->n = n;
		if ((*head) == NULL)
			*head = a;
		else
		{
			(*ad)->next = a;
			(*head) = first;
		}
		return (a);
	}
	return (NULL);
}
