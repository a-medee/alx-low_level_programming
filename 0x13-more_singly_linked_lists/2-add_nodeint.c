#include "lists.h"
#include <aio.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: the head of the list that we will be adding our new element to
 * @n: the element to be added to the head
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p = malloc(sizeof(listint_t));

	if (p)
	{
		p->next = *head;
		p->n = n;
		(*head) = p;

		return (p);
	}
	return (NULL);
}
