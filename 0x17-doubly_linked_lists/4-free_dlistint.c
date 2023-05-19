#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - a function that frees a dlistint_t list
 * @head: the head of the list to be freed
 *
 * Return: a type void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *torm;

	while (head)
	{
		torm = head;
		head = head->next;
		free(torm);
	}
}
