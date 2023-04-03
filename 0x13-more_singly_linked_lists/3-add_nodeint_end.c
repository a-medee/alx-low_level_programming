#include "lists.h"
#include <aio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the beginning of a listint_t list
 * @head: the head of the list that we will be adding our new element to
 * @n: the element to be added to the head
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p = malloc(sizeof(listint_t));
	listint_t *first = *head;

	if (p)
	{
		while (*head)
		{
			if ((*head)->next == NULL)
				break;
			(*head) = (*head)->next;
		}

		p->n = n;
		p->next = NULL;
		if ((*head) == NULL)
			(*head) = p;
		else
		{
			(*head)->next = p;
			(*head) = first;
		}
	}

	return (NULL);
}
