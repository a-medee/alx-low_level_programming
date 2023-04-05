#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - free a listint_t list
 * @head: the head of the list to be freed
 *
 * Return: a type void
 */

void free_listint2(listint_t **head)
{
	listint_t *torm;

	if (head)
	{
		while (*head)
		{
			torm = *head;
			(*head) = (*head)->next;
			free(torm);
		}

		head = NULL;
	}
}
