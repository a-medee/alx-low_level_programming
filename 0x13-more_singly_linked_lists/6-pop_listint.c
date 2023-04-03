#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: the head of the list to be freed
 *
 * description - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * Return: a type int value
 */

int pop_listint(listint_t **head)
{
	listint_t *torm;
	int value = 0;

	if (*head)
	{
		torm = (*head);
		value = torm->n;
		(*head) = (*head)->next;
		free(torm);
	}
	return (value);
}
