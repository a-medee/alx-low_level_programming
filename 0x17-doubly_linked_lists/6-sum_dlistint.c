#include "lists.h"
#include <sys/types.h>

/**
 * sum_dlistint - sum all data inside of a dlistint_t linked list.
 * @head: head of our doubly linked list
 *
 * Return: an int element
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *firstnode = head;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	head = firstnode;
	return (sum);
}
