#include "lists.h"

/**
 * get_nodeint_at_index -  a function that returns the nth node of a
 * listint_t linked list.
 * @head: a pointer to the first element of our linked list
 *
 * Return: the sum of all the data of a listint_t linked list, 0 if head points
 * to an empty list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *firstnode = head;

        while (head)
	{
		sum += head->n;
		head = head->next;
	}
	head = firstnode;

	return (sum);
}
